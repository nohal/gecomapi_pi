/******************************************************************************
 *
 *
 * Project:  OpenCPN
 * Purpose:  GoogleEarth plugin Implementation
 * Author:   Pavel Kalian
 *
 ***************************************************************************
 *   Copyright (C) 2011 by Pavel Kalian   *
 *   $EMAIL$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.             *
 ***************************************************************************
 *
 */
#include "wx/wx.h"
#include "wx/tokenzr.h"
#include "wx/datetime.h"
#include "wx/sound.h"
#include <wx/wfstream.h>
#include <wx/dir.h>
#include <wx/filename.h>
#include <wx/debug.h>
#include <wx/graphics.h>
#include <wx/textfile.h>
#include <wx/stdpaths.h>
#include <wx/gdiobj.h>
#include <wx/bitmap.h>
#include <wx/listimpl.cpp>
#include <wx/filesys.h>
#include <wx/fs_zip.h>
#include <wx/zipstrm.h>

#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <wx/msw/ole/automtn.h>
#include "wx/msw/ole/activex.h"

#include "gecomapi_pi.h"
#include "../../../include/gpxdocument.h"

#define WM_QT_PAINT 0xC2DC

WX_DEFINE_LIST(PositionsList);

GEUIDialog::GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem, gecomapi_pi *ppi)
      :wxPanel(pparent, id, wxDefaultPosition, wxDefaultSize, wxBORDER_NONE, _T("GoogleEarth"))
{
      pPlugIn = ppi;
      LogDebugMessage(_T("Constructing the GE plugin window"));
      m_pauimgr = auimgr;
      m_toolbar_item_id = tbitem;
      m_ballowStart = false;
      m_bshouldcatchup = true;
      m_bbusy = false;

      m_pfocusedwindow = FindFocus();
      GEParentHwnd = NULL;

      this->SetSizeHints( wxDefaultSize, wxDefaultSize );

      itemBoxSizer = new wxBoxSizer(wxVERTICAL);
      SetSizerAndFit(itemBoxSizer);

      m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	itemBoxSizer->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );

      itemBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
      itemBoxSizer->Add(itemBoxSizer1, 0, wxEXPAND);

      m_cbConnected = new wxCheckBox( this, wxID_ANY, _("Connected to chart viewport"), wxDefaultPosition, wxDefaultSize, 0 );
	itemBoxSizer1->Add( m_cbConnected, 0, wxALIGN_RIGHT|wxALL, 10 );

      m_buttonSave = new wxButton( this, wxID_ANY, _("Save view..."), wxDefaultPosition, wxDefaultSize, 0 );
      itemBoxSizer1->Add( m_buttonSave, 0, wxALIGN_RIGHT|wxBOTTOM|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	this->Layout();
	
	this->Centre( wxBOTH );

      Connect(this->GetId(), wxEVT_SIZE, wxSizeEventHandler(GEUIDialog::OnSize));
      Connect(this->GetId(), wxEVT_SHOW, wxShowEventHandler(GEUIDialog::OnShow));
      
      app = NULL;

      m_bgeisuseable = false;
      m_binitializing = false;
      m_bclosed = false;
      m_bisfollowingboat = false;

      //LogDebugMessage(_T("GE plugin window created, going to start GE"));
      //GEInitialize();
      m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveView ), NULL, this );
      m_cbConnected->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GEUIDialog::ConnectedClicked ), NULL, this );

      ConnectToGE();

      m_stopwatch.Start();
      m_stopwatch_boat.Start();
      m_pPositions = new PositionsList();
      m_sEnvelopeKmlFilename = wxStandardPaths().GetTempDir() + _T("\\gecomapi.kml");
      m_sLiveKmlFilename = wxStandardPaths().GetTempDir() + _T("\\gecomapilive.kml");

      m_pdialog = new GESaveViewDlgImpl(this,  wxID_ANY, _("Save view"), wxDefaultPosition, wxSize( -1,-1 ), wxDEFAULT_DIALOG_STYLE );
}

GEUIDialog::~GEUIDialog( )
{
      delete m_pPositions;
      m_pdialog->Destroy();
      wxDELETE(m_pdialog);
      LogDebugMessage(_T("Destroying the GE plugin window"));
      m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveView ), NULL, this );
      LogDebugMessage(_T("Going to close GE"));
      GEClose();
}

void GEUIDialog::GEInitialize()
{
      LogDebugMessage(_T("GE initialization requested"));
      if (NULL == app && !m_bgeisuseable & !m_binitializing & !m_bclosed) 
      {
            m_binitializing = true;
            LogDebugMessage(_T("Initializing GE"));
            if (pPlugIn->IsProcessRunningByName(_T("googleearth.exe")))
            {
                  LogDebugMessage(_T("GE found running, killing it"));
                  if (pPlugIn->KillProcessByName(_T("googleearth.exe")))
                        LogDebugMessage(_T("GE killed"));
                  else
                        LogDebugMessage(_T("GE kill attempt failed"));
            }
            try
            {
                  CoInitialize(NULL);
                  HRESULT	hr;

                  hr = CoCreateInstance(
		            CLSID_ApplicationGE,
		            NULL, //0,
		            CLSCTX_LOCAL_SERVER,
		            IID_IApplicationGE,
		            (void**) &app); //reinterpret_cast<LPVOID *>( &app ));
	            if ( FAILED( hr )) {
		            LogDebugMessage(_T("Error %i while initializing GE"));
                        return;
	            }
                  LogDebugMessage(_T("We survived CoCreateInstance"));
                  Sleep(500);
                  long	is_initialized;
                  do {
	                  is_initialized = app->IsInitialized();
                  } while ( is_initialized == 0 );
                  LogDebugMessage(_T("We survived waiting for IsInitialized"));
                  Sleep(500);
                  m_bgeisuseable = true;
                  m_binitializing = false;
            }
            catch(...) {
                  LogDebugMessage(_T("Error initializing GE, we caught an exception"));
                  return;
            }
            LogDebugMessage(_T("GE Initialized, attaching to the window"));
            GEAttachWindow();
      }
      else
      {
            LogDebugMessage(_T("Not even trying to initialize GE"));
      }
}

void GEUIDialog::GEAttachWindow(bool attach)
{
      LogDebugMessage(_T("Attaching/detaching to GE window requested"));
      if (NULL != app && m_bgeisuseable)
      {
            try
            {
                  if (attach)
                  {
                        LogDebugMessage(_T("Attaching to the GE window"));
                        ShowWindowAsync((HWND) LongToHandle(app->GetMainHwnd()), 0);

                        GEParentHwnd = ::GetParent((HWND) LongToHandle(app->GetRenderHwnd()));
                        ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->m_panel1->GetHWND());
                        GEResize();
                  }
                  else
                  {
                        LogDebugMessage(_T("Detaching from the GE window"));
                        ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), GEParentHwnd);
                  }
            }
            catch(...) {
                  LogDebugMessage(_T("Error attaching/detaching the GE window"));
                  return;
            }
            LogDebugMessage(_T("GE window attached/detached"));
      }
}

void GEUIDialog::GEResize()
{
      LogDebugMessage(_T("GE resize requested"));
      //while ( m_bbusy ) ;
      if ( m_bbusy )
      {
            LogDebugMessage(_T("GE resize request discarded, busy"));
            return;
      }
      m_bbusy = true;
      if(NULL != app && m_bgeisuseable) 
      {
            LogDebugMessage(_T("Resizing GE"));
            try
            {
                  this->Layout();
                  //Calculate the window extents
                  RECT rect;
                  GetWindowRect((HWND) LongToHandle(app->GetMainHwnd()), &rect);
                  int mwidth, mheight, mx, my;
                  mwidth = rect.right - rect.left - 1;
                  mheight = rect.bottom - rect.top - 1;
                  mx = rect.left;
                  my = rect.top;
                  GetWindowRect((HWND) LongToHandle(app->GetRenderHwnd()), &rect);
                  int rwidth, rheight, rx, ry;
                  rwidth = rect.right - rect.left - 1;
                  rheight = rect.bottom - rect.top - 1;
                  rx = rect.left;
                  ry = rect.top;
                  int deltawidth = mwidth - rwidth;
                  int deltaheight = mheight - rheight;
                  wxSize panelsize = this->m_panel1->GetSize();
                  //Resize
                  SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_PAINT, 0);
                  PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QT_PAINT, 0, 0);

                  SetWindowPos(
                        (HWND) LongToHandle(app->GetMainHwnd()),
                        HWND_TOP,
                        0,
                        0,
                        panelsize.GetX() + deltawidth,
                        panelsize.GetY() + deltaheight,
                        SWP_FRAMECHANGED);

                  SendMessage((HWND) LongToHandle(app->GetRenderHwnd()), WM_COMMAND, WM_SIZE, 0);
                  LogDebugMessage(_T("GE resized"));
            }
            catch(...) {
                  LogDebugMessage(_T("Error resizing GE window"));
            }
      }
      m_bbusy = false;
}

bool GEUIDialog::GEMoveCamera()
{
      LogDebugMessage(wxString::Format(_T("GE camera move to %f, %f requested"), m_hotspot_lat, m_hotspot_lon, m_camera_range, m_camera_tilt, m_camera_azimuth));
      int interval = m_stopwatch.Time();
      m_prev_camera_azimuth = m_camera_azimuth;
      m_prev_camera_range = m_camera_range;
      m_prev_camera_tilt = m_camera_tilt;
      if (m_bbusy)
      {
            LogDebugMessage(_T("GE camera move request discarded, GE busy"));
            m_bshouldcatchup = true;
            return false;
      }
      if (interval < CAMERA_MOVE_INTERVAL) // If it is less than CAMERA_MOVE_INTERVAL since last request, don't move the camera
      {
            LogDebugMessage(_T("GE camera move request discarded, too soon after a previous action"));
            m_bshouldcatchup = true;
            return false;
      }
      m_stopwatch.Start();
      if(NULL != app && m_bgeisuseable)
      {
            LogDebugMessage(_T("Moving GE camera"));
            //app->raw_GetCamera(false, &camera);
            //camera->PutFocusPointLatitude(m_hotspot_lat);
            //camera->PutFocusPointLongitude(m_hotspot_lon);
            //camera->PutAzimuth(m_camera_azimuth); //north up
            //camera->PutFocusPointAltitude(0.0); //focus point on sea level
            //camera->PutRange(m_camera_range); //camera 1000 meters high
            //camera->PutTilt(0.0); //camera directly over a focus point
            //app->raw_SetCamera(camera, 1.0); //1.0 - how fast the camera gets there

            try 
            {
                  app->SetCameraParams(m_hotspot_lat, m_hotspot_lon, 0.0, AbsoluteAltitudeGE, m_camera_range, m_camera_tilt, m_camera_azimuth, 5.0);
                  LogDebugMessage(_T("GE camera moved"));
            }
            catch(...) {
                  LogDebugMessage(_T("Error moving GE camera"));
                  return false;
            }
            return true;
      }
      LogDebugMessage(_T("Not moving the camera, GE looks unusable"));
      return false;
}

void GEUIDialog::SetCursorLatLon(double lat, double lon)
{
      LogDebugMessage(wxString::Format(_T("Following the cursor to %f, %f requested"), lat, lon));
      DetachIfNeeded(m_camera_azimuth, m_camera_range, m_camera_tilt);
      if (!m_cbConnected->GetValue())
      {
            LogDebugMessage(_T("Not following as the checkbox is not checked"));
            return;
      }
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;

      GEMoveCamera();
}

void GEUIDialog::DetachIfNeeded(double plugin_azimuth, double plugin_range, double plugin_tilt)
{
      double lat, lon, alt, azimuth, range, tilt;

      if ( m_bbusy )
      {
            LogDebugMessage(_T("Not detaching, busy"));
            return;
      }
      if ( m_bshouldcatchup ) 
      {
            m_bshouldcatchup = false;
            LogDebugMessage(_T("Not detaching, asked to catch up"));
            return;
      }

      if ( pPlugIn->ShouldDisconnect() || pPlugIn->ShouldUpdateFromGE() )
            if ( GEReadViewParameters( lat, lon, alt, azimuth, range, tilt ) )
            {
                  if ( pPlugIn->ShouldDisconnect() && m_cbConnected->GetValue() )
                        if ( (abs(azimuth - m_prev_camera_azimuth) > 10 && plugin_azimuth != DONT_CONSIDER_VALUE) || (abs(range - m_prev_camera_range) > 100 && plugin_range != DONT_CONSIDER_VALUE) || (abs(tilt - m_prev_camera_tilt) > 10 && plugin_tilt != DONT_CONSIDER_VALUE) ) //we don't want to do anything in case of a very small difference I would say
                        {
                              LogDebugMessage(wxString::Format(_T("Disconnected from the viewport, because the GE reported values (A: %f, R: %f, T: %f) differ from the plugin settings (A: %f, R: %f, T: %f)"), azimuth, range, tilt, plugin_azimuth, plugin_range, plugin_tilt));
                              m_cbConnected->SetValue(false);
                        }
                        //if ( (abs(azimuth - plugin_azimuth) > 10 && plugin_azimuth != DONT_CONSIDER_VALUE) || (abs(range - plugin_range) > 100 && plugin_range != DONT_CONSIDER_VALUE) || (abs(tilt - plugin_tilt) > 10 && plugin_tilt != DONT_CONSIDER_VALUE) ) //we don't want to do anything in case of a very small difference I would say
                        //{
                        //      LogDebugMessage(wxString::Format(_T("Disconnected from the viewport, because the GE reported values (A: %f, R: %f, T: %f) differ from the plugin settings (A: %f, R: %f, T: %f)"), azimuth, range, tilt, plugin_azimuth, plugin_range, plugin_tilt));
                        //      m_cbConnected->SetValue(false);
                        //}
                  if ( pPlugIn->ShouldUpdateFromGE() )
                        pPlugIn->SetParams(azimuth, range, tilt);
            }
}

void GEUIDialog::SetBoatLatLon(double lat, double lon)
{
      LogDebugMessage(wxString::Format(_T("Following the boat to %f, %f requested"), lat, lon));
      DetachIfNeeded(m_camera_azimuth, m_camera_range, m_camera_tilt);
      if (!m_cbConnected->GetValue())
      {
            LogDebugMessage(_T("Not following as the checkbox is not checked"));
            return;
      }
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;

      GEMoveCamera();
}

void GEUIDialog::ShowBoat(double lat, double lon)
{
      GEShowBoat(lat, lon);
}

void GEUIDialog::GEShowBoat(double lat, double lon)
{
      LogDebugMessage(wxString::Format(_T("Show boat at %f, %f requested"), lat, lon));
      if ( m_bbusy )
      {
            LogDebugMessage(_T("Not showing, busy"));
            return;
      }
      int interval = m_stopwatch_boat.Time();
      if (interval < CAMERA_MOVE_INTERVAL * 5) // If it is less than CAMERA_MOVE_INTERVAL * 5 since last request, don't move the boat
      {
            LogDebugMessage(_T("Boat display request discarded, too soon after a previous action"));
            return;
      }
      m_stopwatch_boat.Start();
      if (m_pPositions->GetCount() > BOAT_POSITIONS_STORED)
            m_pPositions->Erase(m_pPositions->GetFirst());
      m_pPositions->Append(new PositionReport(lat, lon, wxDateTime::Now()));
      wxTextFile kml(m_sLiveKmlFilename);
      if(wxFile::Exists(m_sLiveKmlFilename))
      {
            kml.Open();
            kml.Clear();
      }
      else
      {
            kml.Create();
      }
      wxString coords;
      wxPositionsListNode *posn = m_pPositions->GetFirst();
      do
      {
            coords += wxString::Format(_T("%f,%f,0.000000\n"), posn->GetData()->longitude, posn->GetData()->latitude);
      } while (posn = posn->GetNext());
      if (pPlugIn->ShouldShowBoat())
            kml.AddLine(wxString::Format(LiveKml, 1, lon, lat, 1, coords));
      else
            kml.AddLine(wxString::Format(LiveKml, 0, lon, lat, 0, coords));
      kml.Write();
      kml.Close();
      if(NULL != app && m_bgeisuseable)
      {
            if (!m_bisfollowingboat && pPlugIn->ShouldShowBoat())
            {
                  if(wxFile::Exists(m_sEnvelopeKmlFilename))
                        wxRemoveFile(m_sEnvelopeKmlFilename);
                  wxTextFile kml(m_sEnvelopeKmlFilename);
                  kml.Create();
                  kml.AddLine(wxString::Format(EnvelopeKml, m_sLiveKmlFilename));
                  kml.Write();
                  kml.Close();
                  BSTR pdata = wxConvertStringToOle(m_sEnvelopeKmlFilename);
                  m_bbusy = true;
                  app->OpenKmlFile(pdata, 1);
                  m_bisfollowingboat = true;
            } 
            else if (m_bisfollowingboat && !pPlugIn->ShouldShowBoat())
            {
                  if(wxFile::Exists(m_sEnvelopeKmlFilename))
                        wxRemoveFile(m_sEnvelopeKmlFilename);
                  wxTextFile kml(m_sEnvelopeKmlFilename);
                  kml.Create();
                  kml.AddLine(EmptyKml);
                  kml.Write();
                  kml.Close();
                  BSTR pdata = wxConvertStringToOle(m_sEnvelopeKmlFilename);
                  m_bbusy = true;
                  app->OpenKmlFile(pdata, 1);
                  m_bisfollowingboat = false;
            }
            /*
            IFeatureGE* tp;
            app->raw_GetTemporaryPlaces(&tp);
            if ( tp )
            {
                  IFeatureCollectionGE* tps;
                  tp->raw_GetChildren(&tps);
                  if ( tps && tps->GetCount() > 0 )
                  {
                        //for (int i = 0; i < tps->Count; i++)
                        //{
                        //      tps->Item[i]->PutVisibility(0);
                        //}
                        try {
                              //FIXME: This works, BUT GE consumes enormous amounts of memory - really there is no way to change the properties of existing waypoint?
                              //Looks like ther isn't, so some trick like from http://groups.google.com/group/kml-support-com-api/browse_thread/thread/76c9f9f3ab5ff28f/4244ff5df01c5c25?lnk=gst&q=temporary+places# and http://bbs.keyhole.com/ubb/ubbthreads.php?ubb=showflat&Number=816832&site_id=1#import will be necessary
                              //Tutorial: http://code.google.com/intl/cs/apis/kml/documentation/kml_21tutorial.html#updates
                              tps->GetItem(tps->GetCount() - 1)->PutVisibility(false);
                        }
                        catch (...) {}
                  }
            }
            wxString kml = wxString::Format(_T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<kml xmlns=\"http://earth.google.com/kml/2.0\">\n<Placemark>\n  <name>BOAT</name>\n  <visibility>1</visibility>\n  <Style>\n    <IconStyle>\n      <Icon>\n        <href>root://icons/palette-4.png</href>\n        <x>32</x>\n        <y>0</y>\n        <w>32</w>\n        <h>32</h>\n      </Icon>\n    </IconStyle>\n  </Style>\n  <Point>\n    <extrude>1</extrude>\n    <altitudeMode>relativeToGround</altitudeMode>\n    <coordinates>%f,%f,0</coordinates>\n  </Point>\n</Placemark>\n</kml>"), lon, lat);
            BSTR pdata = wxConvertStringToOle(kml);
            try 
            {
                  app->LoadKmlData(&pdata);
                  LogDebugMessage(_T("Shown"));
            }
            catch (...) 
            {
                  LogDebugMessage(_T("There was an error showing the boat"));
            }
            */
      }
      m_bbusy = false;
}

void GEUIDialog::SetViewPort(double lat, double lon, double geo_height, double geo_width, double rotation)
{
      LogDebugMessage(wxString::Format(_T("Following the viewport to Lat=%f, Lon=%f, H=%f, W=%f, R=%f requested"), lat, lon, geo_height, geo_width, rotation));
      DetachIfNeeded(rotation, DONT_CONSIDER_VALUE, DONT_CONSIDER_VALUE);
      if (!m_cbConnected->GetValue())
      {
            LogDebugMessage(_T("Not following as the checkbox is not checked"));
            return;
      }
      //Lets compute a range. To make it easy, we will just look from the distance equal to half the chart viewport width at the centerpoint...
      m_camera_range = geo_width / 2 * 60 * 1852; //TODO: maybe decide which axis is better to use to set it to fit the same area to the window...

      double rotation_deg = rotation * 180 / PI;
      if (rotation_deg < -180)
            rotation_deg = -360 - rotation_deg;
      else
            rotation_deg = abs(rotation_deg);
      LogDebugMessage(wxString::Format(_T("Rotation translated to %f degrees"), rotation_deg));
      m_camera_azimuth = rotation_deg;
      m_camera_tilt = 0.0;
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;
      
      wxAuiPaneInfo &pi = m_pauimgr->GetPane(this);
      if (pi.IsShown())
            GEMoveCamera();
}

void GEUIDialog::OnShow(wxShowEvent& event)
{
      LogDebugMessage(_T("GE plugin - OnShow event"));
      if(m_ballowStart)
            GEInitialize();
      SetToolbarItemState(m_toolbar_item_id, IsShown());
      
      event.Skip();
}

void GEUIDialog::GEClose()
{
//is all of the following needed?
      LogDebugMessage(_T("Closing GE requested"));
      if (NULL != app && m_bgeisuseable) 
      {
            LogDebugMessage(_T("Closing GE"));
            m_bgeisuseable = false;
            m_bclosed = true;
            try
            {
                  SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_QUIT, 0);
                  PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QUIT, 0, 0);
                  /*long is_initialized;
                  do {
	                  is_initialized = app->IsInitialized();
                  } while ( is_initialized != 0 );*/
                  app->Release();
                  //delete app;
                  app = NULL;
                  CoUninitialize();
            }
            catch(...) {
                  LogDebugMessage(_T("Error closing GE"));
            }
            LogDebugMessage(_T("GE closed"));
      }
}

void GEUIDialog::OnSize ( wxSizeEvent& event )
{
      LogDebugMessage(_T("GE plugin - OnSize event"));
      GEResize();
      if (m_pfocusedwindow)
            m_pfocusedwindow->SetFocus(); //returns focus - don't know why, but seems needed

      pPlugIn->m_iWindowWidth = this->GetSize().GetWidth();
      pPlugIn->m_iWindowHeight = this->GetSize().GetHeight();
      event.Skip();
}

void GEUIDialog::SetCameraParameters(int cameraAzimuth, int cameraTilt, int cameraRange)
{
      m_camera_azimuth = (double) cameraAzimuth;
      m_camera_tilt = (double) cameraTilt;
      m_camera_range = (double) cameraRange;
}

void GEUIDialog::SetWindowWidth(int width)
{
      LogDebugMessage(_T("GE SetWindowWidth"));
      itemBoxSizer->Layout();
      itemBoxSizer->Fit(this);
      wxAuiPaneInfo &pi = m_pauimgr->GetPane(this);
      pi.MinSize(wxSize(width, width));
      pi.BestSize(wxSize(width, width));
      pi.FloatingSize(wxSize(width, width));
      m_pauimgr->Update();
      LogDebugMessage(_T("GE window width set"));
}

void GEUIDialog::SaveViewAsKml( wxString filename, wxString viewname ) 
{ 
      double lat, lon, alt, azimuth, rng, tilt;
      //We have to read the camera as there is no other way to tell whether user modified the GE view or not
      if (GEReadViewParameters(lat, lon, alt, azimuth, rng, tilt))
      {
            wxTextFile file( filename );
            file.Open();
            file.Clear();
            file.AddLine(wxString::Format(_T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<kml xmlns=\"http://earth.google.com/kml/2.0\">\n<Placemark>\n<name>%s</name>\n<LookAt>\n<longitude>%f</longitude>\n<latitude>%f</latitude>\n<range>%f</range>\n<tilt>%f</tilt>\n<heading>%f</heading>\n</LookAt>\n</Placemark>\n</kml>"), 
                  encodeXMLEntities(viewname), lon, lat, rng, tilt, azimuth));
            file.Write();
            file.Close();
      }
}

void GEUIDialog::SaveViewAsKmz( wxString filename, wxString viewname ) 
{
      //TODO: - kml, jpg, zip it
      wxFileName fn(filename);
      wxFFileOutputStream out(filename);
      wxZipOutputStream zip(out);
      double west, east, north, south, lat, lon, alt;
      bool proj, exa;

      GEGetPointOnTerrain(GE_SCR_UPCENTER, north, lon, alt, proj, exa);
      GEGetPointOnTerrain(GE_SCR_LOWCENTER, south, lon, alt, proj, exa);
      GEGetPointOnTerrain(GE_SCR_LEFTCENTER, lat, west, alt, proj, exa);
      GEGetPointOnTerrain(GE_SCR_RIGHTCENTER, lat, east, alt, proj, exa);

      wxString tempimg = wxFileName::CreateTempFileName(_T("gecomapi"));
      SaveViewAsJPG(tempimg);
      zip.PutNextEntry(wxString::Format(_T("files/%s.jpg"), fn.GetName()));
      wxFileInputStream stream(tempimg);
	zip.Write(stream);
      zip.PutNextEntry(_T("doc.kml"));
      wxCharBuffer buffer;
      buffer = wxConvertWX2MB(wxString::Format(_T("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?><kml xmlns=\"http://www.opengis.net/kml/2.2\"><GroundOverlay><name>%s</name><Icon><href>files/%s.jpg</href><drawOrder>0</drawOrder></Icon><LatLonBox><north>%f</north><south>%f</south><east>%f</east><west>%f</west><rotation>%f</rotation></LatLonBox></GroundOverlay></kml>"), encodeXMLEntities(viewname), fn.GetName(), north, south, east, west, 0.0));
      zip.Write(buffer.data(), strlen(buffer.data()));
      wxRemoveFile(tempimg);
}

void GEUIDialog::SaveViewAsGpx( wxString filename, wxString viewname ) 
{ 
      double lat, lon, alt;
      bool proj, exa;
      GpxDocument * gpx = new GpxDocument();
      GpxRootElement *gpxroot = (GpxRootElement *)gpx->RootElement();
      GEGetPointOnTerrain(GE_SCR_UPLEFT, lat, lon, alt, proj, exa);
      gpxroot->AddWaypoint(new GpxWptElement(GPX_WPT_WAYPOINT, lat, lon, 0, &wxDateTime::Now(), 0, -1, _T("UpperLeft"), wxEmptyString, viewname, wxEmptyString, NULL, _T("triangle"), _T("WPT")));
      GEGetPointOnTerrain(GE_SCR_LOWRIGHT, lat, lon, alt, proj, exa);
      gpxroot->AddWaypoint(new GpxWptElement(GPX_WPT_WAYPOINT, lat, lon, 0, &wxDateTime::Now(), 0, -1, _T("LowerRight"), wxEmptyString, viewname, wxEmptyString, NULL, _T("triangle"), _T("WPT")));
      GEGetPointOnTerrain(GE_SCR_UPRIGHT, lat, lon, alt, proj, exa);
      gpxroot->AddWaypoint(new GpxWptElement(GPX_WPT_WAYPOINT, lat, lon, 0, &wxDateTime::Now(), 0, -1, _T("UpperRight"), wxEmptyString, viewname, wxEmptyString, NULL, _T("triangle"), _T("WPT")));
      GEGetPointOnTerrain(GE_SCR_LOWLEFT, lat, lon, alt, proj, exa);
      gpxroot->AddWaypoint(new GpxWptElement(GPX_WPT_WAYPOINT, lat, lon, 0, &wxDateTime::Now(), 0, -1, _T("LowerLeft"), wxEmptyString, viewname, wxEmptyString, NULL, _T("triangle"), _T("WPT")));
      GEGetPointOnTerrain(GE_SCR_CENTER, lat, lon, alt, proj, exa);
      gpxroot->AddWaypoint(new GpxWptElement(GPX_WPT_WAYPOINT, lat, lon, 0, &wxDateTime::Now(), 0, -1, _T("Center"), wxEmptyString, viewname, wxEmptyString, NULL, _T("triangle"), _T("WPT")));
      gpx->SaveFile(filename);
      gpx->Clear();
      delete gpx;
}

void GEUIDialog::SaveViewAsJPG( wxString filename ) 
{ 
      if (NULL == app || !m_bgeisuseable)
      {
            wxMessageBox(_("Screenshot can't be created, GE looks uninitialized..."), _("Problem!"));
            return;
      }

      RECT rect;
      GetWindowRect((HWND) LongToHandle(app->GetRenderHwnd()), &rect);
      int width, height, x, y;
      width = rect.right - rect.left - 1;
      height = rect.bottom - rect.top - 1;
      x = rect.left;
      y = rect.top;

      wxSize screenSize = wxGetDisplaySize();
	wxBitmap bitmap(screenSize.x, screenSize.y);
	wxScreenDC dc;
	wxMemoryDC memDC;
	memDC.SelectObject(bitmap);
      memDC.Blit(0, 0, screenSize.x, screenSize.y, & dc, 0, 0);
	memDC.SelectObject(wxNullBitmap);
      wxMemoryDC cropDC(bitmap);
      wxBitmap screenshot(width, height, -1);
      memDC.SelectObject(screenshot);
      memDC.Blit( 0, 0, width, height, &cropDC, x, y  );
	memDC.SelectObject(wxNullBitmap);
      screenshot.SaveFile(filename, wxBITMAP_TYPE_JPEG);
}

void GEUIDialog::SaveView( wxCommandEvent & event ) 
{
      m_pdialog->Clean();
      if (m_pdialog->ShowModal() == wxID_OK)
      {
            wxFileName fn(m_pdialog->m_fpPath->GetPath());
            wxString viewname = m_pdialog->m_tViewName->GetValue();
            int format = m_pdialog->m_rFormat->GetSelection();
            m_pdialog->Close();
            Update();
            InvalidateRect ((HWND) LongToHandle(app->GetRenderHwnd()), NULL, TRUE);
            UpdateWindow ((HWND) LongToHandle(app->GetRenderHwnd()));
            
            if ( format == SAVE_KML )
            {
                  if ( fn.GetExt().Upper() != _T("KML") )
                        fn.SetExt(_T("kml"));
                  SaveViewAsKml( fn.GetFullPath(), viewname );
            }
            else if ( format == SAVE_JPG )
            {
                  if ( fn.GetExt().Upper() != _T("JPG") )
                        fn.SetExt(_T("jpg"));
                  SaveViewAsJPG( fn.GetFullPath() );
            }
            else if ( format == SAVE_GE2KAP )
            {
                  //Paul doesn't need the JPG anymore
                  //if ( fn.GetExt().Upper() != _T("JPG") )
                  //      fn.SetExt(_T("jpg"));
                  //SaveViewAsJPG( fn.GetFullPath() );
                  fn.SetExt(_T("gpx"));
                  SaveViewAsGpx( fn.GetFullPath(), viewname );
            }
            else if ( format == SAVE_IMGKAP )
            {
                  if ( fn.GetExt().Upper() != _T("KMZ") )
                        fn.SetExt(_T("kmz"));
                  SaveViewAsKmz( fn.GetFullPath(), viewname );
            }
      }
      else
      {
            m_pdialog->Close();
      }
      if (m_pfocusedwindow)
            m_pfocusedwindow->SetFocus();
      event.Skip();
}

void GEUIDialog::ConnectedClicked( wxCommandEvent& event ) 
{
      LogDebugMessage(_T("Connection checkbox clicked"));
      if (m_cbConnected->GetValue())
      {
            LogDebugMessage(_T("The checkbox is now checked, so we will try to catch up with the viewport..."));
            m_bshouldcatchup = true;
      }
      else
            LogDebugMessage(_T("The checkbox is now unchecked"));

      event.Skip(); 
}


wxString GEUIDialog::encodeXMLEntities(wxString str)
{
      str.Replace(_T("<"),_T("&lt;"));
      str.Replace(_T(">"),_T("&gt;"));
      str.Replace(_T("&"),_T("&amp;"));
      str.Replace(_T("\""),_T("&#34;"));
      str.Replace(_T("\\"),_T("&#39;"));
      return str;
}

bool GEUIDialog::GEReadViewParameters(double& lat, double& lon, double& alt, double& azimuth, double& range, double& tilt)
{
      LogDebugMessage(_T("GE View parameters requested"));
      while ( m_bbusy ) ;
      m_bbusy = true;
      int interval = m_stopwatch.Time();
      if (interval > CAMERA_MOVE_INTERVAL * 10)
            m_stopwatch.Start(); //Things got crazy, it's time to let it settle down...
      if(NULL != app && m_bgeisuseable)
      {
            LogDebugMessage(_T("Getting GE view parameters"));
            try
            {
                  ICameraInfoGE* camera;
                  app->raw_GetCamera(false, &camera);
                  if (NULL != camera)
                  {
                        lat = camera->FocusPointLatitude;
                        lon = camera->FocusPointLongitude;
                        alt = camera->FocusPointAltitude;
                        azimuth = camera->Azimuth;
                        range = camera->Range;
                        tilt = camera->Tilt;
                  }
                  else
                  {
                        m_bgeisuseable = false;
                        app = NULL;
                  }
            }
            catch(...) {
                  LogDebugMessage(_T("Error geting GE view parameters"));
            }
            LogDebugMessage(wxString::Format(_T("GE view parameters obtained: lat=%f, lon=%f, alt=%f, azimuth=%f, range=%f, tilt=%f"), lat, lon, alt, azimuth, range, tilt));
            m_bbusy = false;
            return true;
      }
      m_bbusy = false;
      return false;
}

bool GEUIDialog::GEGetPointOnTerrain(double x, double y, double& lat, double& lon, double &alt, bool& projected, bool& exagerated)
{
      LogDebugMessage(_T("GE Point on terrain requested"));
      while ( m_bbusy ) ;
      m_bbusy = true;
      int interval = m_stopwatch.Time();
      if (interval > CAMERA_MOVE_INTERVAL * 10)
            m_stopwatch.Start(); //Things got crazy, it's time to let it settle down...
      if(NULL != app && m_bgeisuseable)
      {
            LogDebugMessage(_T("Getting GE point on terrain"));
            try
            {
                  IPointOnTerrainGE* point;
                  app->raw_GetPointOnTerrainFromScreenCoords(x, y, &point);
                  lat = point->Latitude;
                  lon = point->Longitude;
                  alt = point->Altitude;
                  projected = (0 == point->ProjectedOntoGlobe);
                  exagerated = (0 == point->ZeroElevationExaggeration);
            }
            catch(...) {
                  LogDebugMessage(_T("Error geting GE point on terrain"));
            }
            LogDebugMessage(wxString::Format(_T("GE view point on terrain obtained: x=%f, y=%f, lat=%f, lon=%f, alt=%f, proj=%i, exag=%i"), x, y, lat, lon, alt, projected, exagerated));
            m_bbusy = false;
            return true;
      }
      m_bbusy = false;
      return false;
}

void GEUIDialog::ConnectToGE()
{
      m_cbConnected->SetValue(true);
}

PositionReport::PositionReport(double lat, double lon, wxDateTime ts)
{
      latitude = lat;
      longitude = lon;
      timestamp = ts;
}

void GESaveViewDlgImpl::OnOkClick( wxCommandEvent& event )
{
      event.Skip();
}

void GESaveViewDlgImpl::CheckInput( wxCommandEvent& event )
{
      DoCheckInput();
      event.Skip();
}

void GESaveViewDlgImpl::CheckInput( wxFileDirPickerEvent& event )
{
      DoCheckInput();
      event.Skip();
}

void GESaveViewDlgImpl::DoCheckInput()
{
      bool cansave = true;
      if (m_rFormat->GetSelection() != SAVE_JPG)
            if (m_tViewName->GetValue().Length() == 0)
                  cansave = false;
      if (cansave && m_fpPath->GetPath().Length() == 0)
                  cansave = false;
      if(cansave)
      {
            m_sdbSizer2OK->Enable();
            return;
      }
      m_sdbSizer2OK->Disable();
}

void GESaveViewDlgImpl::Clean()
{
      m_tViewName->SetValue(wxEmptyString);
      m_fpPath->SetPath(wxEmptyString);
      m_sdbSizer2OK->Disable();
}