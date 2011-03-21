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
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
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
#include <wx/gdiobj.h>
#include <wx/bitmap.h>

#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <wx/msw/ole/automtn.h>
#include "wx/msw/ole/activex.h"

#include "gecomapi_pi.h"

#define WM_QT_PAINT 0xC2DC

GEUIDialog::GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem, gecomapi_pi *ppi)
      :wxPanel(pparent, id, wxDefaultPosition, wxDefaultSize, wxBORDER_NONE, _("GoogleEarth"))
{
      pPlugIn = ppi;
      LogDebugMessage(_T("Constructing the GE plugin window"));
      m_pauimgr = auimgr;
      m_toolbar_item_id = tbitem;
      m_ballowStart = false;
      m_bshouldcatchup = false;
      m_bbusy = false;

      m_pfocusedwindow = FindFocus();

      this->SetSizeHints( wxDefaultSize, wxDefaultSize );

      itemBoxSizer = new wxBoxSizer(wxVERTICAL);
      SetSizerAndFit(itemBoxSizer);

      m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	itemBoxSizer->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );

      itemBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
      itemBoxSizer->Add(itemBoxSizer1, 0, wxEXPAND);

      m_cbConnected = new wxCheckBox( this, wxID_ANY, _("Connected to chart viewport"), wxDefaultPosition, wxDefaultSize, 0 );
	itemBoxSizer1->Add( m_cbConnected, 0, wxALIGN_RIGHT|wxALL, 10 );

      m_buttonSaveJPG = new wxButton( this, wxID_ANY, _("Save view as JPG"), wxDefaultPosition, wxDefaultSize, 0 );
      itemBoxSizer1->Add( m_buttonSaveJPG, 0, wxALIGN_RIGHT|wxBOTTOM|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	m_buttonSaveKml = new wxButton( this, wxID_ANY, _("Save view as KML"), wxDefaultPosition, wxDefaultSize, 0 );
      itemBoxSizer1->Add( m_buttonSaveKml, 0, wxALIGN_RIGHT|wxBOTTOM|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	this->Layout();
	
	this->Centre( wxBOTH );

      Connect(this->GetId(), wxEVT_SIZE, wxSizeEventHandler(GEUIDialog::OnSize));
      Connect(this->GetId(), wxEVT_SHOW, wxShowEventHandler(GEUIDialog::OnShow));
      
      app = NULL;

      m_bgeisuseable = false;
      m_binitializing = false;
      m_bclosed = false;

      //LogDebugMessage(_T("GE plugin window created, going to start GE"));
      //GEInitialize();
      m_buttonSaveKml->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveViewAsKml ), NULL, this );
      m_buttonSaveJPG->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveViewAsJPG ), NULL, this );
      m_cbConnected->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GEUIDialog::ConnectedClicked ), NULL, this );

      ConnectToGE();

      m_stopwatch.Start();
}

GEUIDialog::~GEUIDialog( )
{
      LogDebugMessage(_T("Destroying the GE plugin window"));
      m_buttonSaveKml->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveViewAsKml ), NULL, this );
      LogDebugMessage(_T("Going to close GE"));
      GEClose();
}

void GEUIDialog::GEInitialize()
{
      LogDebugMessage(_T("GE initialization requested"));
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
		            0,
		            CLSCTX_LOCAL_SERVER,
		            IID_IApplicationGE,
		            reinterpret_cast<LPVOID *>( &app ));
	            if ( FAILED( hr )) {
		            //cerr << "cannot create IApplicationGE" << endl;
		            //return -1;
	            }
                  long	is_initialized;
                  do {
	                  is_initialized = app->IsInitialized();
                  } while ( is_initialized == 0 );
                  m_bgeisuseable = true;
                  m_binitializing = false;
                  m_binitializing = false;
            }
            catch(...) {
                  LogDebugMessage(_T("Error initializing GE"));
            }
            LogDebugMessage(_T("GE Initialized, attaching to the window"));
            GEAttachWindow();
      }
}

void GEUIDialog::GEAttachWindow()
{
      LogDebugMessage(_T("Attaching to GE window requested"));
      if (NULL != app && m_bgeisuseable)
      {
            LogDebugMessage(_T("Attaching to the GE window"));
            try
            {
                 ShowWindowAsync((HWND) LongToHandle(app->GetMainHwnd()), 0);

                  //::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->GetHWND());
                  ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->m_panel1->GetHWND());
                  GEResize();
            }
            catch(...) {
                  LogDebugMessage(_T("Error attaching to GE window"));
            }
            LogDebugMessage(_T("GE window attached"));
      }
}

void GEUIDialog::GEResize()
{
      LogDebugMessage(_T("GE resize requested"));
      while ( m_bbusy ) ;
            m_bbusy = true;
      if(NULL != app && m_bgeisuseable) 
      {
            LogDebugMessage(_T("Resizing GE"));
            try
            {
                  SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_PAINT, 0);
                  PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QT_PAINT, 0, 0);

                  SetWindowPos(
                        (HWND) LongToHandle(app->GetMainHwnd()),
                        HWND_TOP,
                        0,
                        0,
                        this->GetSize().GetX(),
                        this->GetSize().GetY() + 4, //FIXME: those 4 are just a wild guess based on observation - we should resize RenderHwnd - but how to not confuse GE? Like this we get bad size when tolbar or sidebar are shown in GE
                        SWP_FRAMECHANGED);

                  SendMessage((HWND) LongToHandle(app->GetRenderHwnd()), WM_COMMAND, WM_SIZE, 0);
            }
            catch(...) {
                  LogDebugMessage(_T("Error resizing GE window"));
            }
            LogDebugMessage(_T("GE resized"));
      }
      m_bbusy = false;
}

bool GEUIDialog::GEMoveCamera()
{
      LogDebugMessage(wxString::Format(_T("GE camera move to %f, %f requested"), m_hotspot_lat, m_hotspot_lon, m_camera_range, m_camera_tilt, m_camera_azimuth));
      int interval = m_stopwatch.Time();
      if (m_bbusy)
      {
            LogDebugMessage(_T("GE camera move request discarded, GE busy"));
            return false;
      }
      if (interval < CAMERA_MOVE_INTERVAL) // If it is less than CAMERA_MOVE_INTERVAL since last request, don't move the camera
      {
            LogDebugMessage(_T("GE camera move request discarded, too soon after a previous action"));
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
                        if ( (abs(azimuth - plugin_azimuth) > 10 && plugin_azimuth != DONT_CONSIDER_VALUE) || (abs(range - plugin_range) > 100 && plugin_range != DONT_CONSIDER_VALUE) || (abs(tilt - plugin_tilt) > 10 && plugin_tilt != DONT_CONSIDER_VALUE) ) //we don't want to do anything in case of a very small difference I would say
                        {
                              LogDebugMessage(wxString::Format(_T("Disconnected from the viewport, because the GE reported values (A: %f, R: %f, T: %f) differ from the plugin settings (A: %f, R: %f, T: %f)"), azimuth, range, tilt, plugin_azimuth, plugin_range, plugin_tilt));
                              m_cbConnected->SetValue(false);
                        }
                  if ( pPlugIn->ShouldUpdateFromGE() )
                        pPlugIn->SetParams(azimuth, range, tilt);
            }
}

void GEUIDialog::SetBoatLatLon(double lat, double lon)
{
      LogDebugMessage(wxString::Format(_T("Following the boat to %f, %f requested"), lat, lon));
      if ( pPlugIn->ShouldShowBoat() )
      {
            GEShowBoat(lat, lon);
      }
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

void GEUIDialog::GEShowBoat(double lat, double lon)
{
      LogDebugMessage(wxString::Format(_T("Show boat at %f, %f requested"), lat, lon));
      while ( m_bbusy ) ;
            m_bbusy = true;
      if(NULL != app && m_bgeisuseable)
      {
            IFeatureGE* tp;
            app->raw_GetTemporaryPlaces(&tp);
            if ( tp )
            {
                  IFeatureCollectionGE* tps;
                  tp->raw_GetChildren(&tps);
                  if ( tps && tps->GetCount() > 0 )
                  {
                        /*for (int i = 0; i < tps->Count; i++)
                        {
                              tps->Item[i]->PutVisibility(0);
                        }*/
                        try {
                              tps->GetItem(tps->GetCount() - 1)->PutVisibility(false); //FIXME: Why does this fail on the first?
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
      m_camera_azimuth = rotation;
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

void GEUIDialog::SaveViewAsKml( wxCommandEvent& event ) 
{ 
      wxString viewname = wxGetTextFromUser(_("Enter the name for the view"), _("Enter view name"), _("View name"), this);

      if(viewname.empty())
      {
            //FIXME: Should we accept empty or not??? If yes
            event.Skip();
            return;
      }

      wxString filename = wxFileSelector(_("Where to save?"), NULL, NULL, _T("kml"), _T("KML files (*.kml)|*.kml"));
      if ( !filename.empty() )
      {
            double lat, lon, alt, azimuth, rng, tilt;
            //We have to read the camera as there is no other way to tell whether user modified the GE view or not
            if (GEReadViewParameters(lat, lon, alt, azimuth, rng, tilt))
            {
                  wxTextFile file( filename );
                  file.Open();
                  file.AddLine(wxString::Format(_T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<kml xmlns=\"http://earth.google.com/kml/2.0\">\n<Placemark>\n<name>%s</name>\n<LookAt>\n<longitude>%f</longitude>\n<latitude>%f</latitude>\n<range>%f</range>\n<tilt>%f</tilt>\n<heading>%f</heading>\n</LookAt>\n</Placemark>\n</kml>"), 
                        encodeXMLEntities(viewname), lon, lat, rng, tilt, azimuth));
                  file.Write();
                  file.Close();
            }
            //else: error
      }
      //else: cancelled by user
      if (m_pfocusedwindow)
            m_pfocusedwindow->SetFocus();
      event.Skip(); 
}

void GEUIDialog::SaveViewAsJPG( wxCommandEvent& event ) 
{ 
      if (NULL == app || !m_bgeisuseable)
      {
            wxMessageBox(_("Screenshot can't be created, GE looks uninitialized..."), _("Problem!"));
            return;
      }
      wxString filename = wxFileSelector(_("Where to save?"), NULL, NULL, _T("jpg"), _T("JPEG images (*.jpg)|*.jpg"));
      if ( !filename.empty() )
      {
            RECT rect;
            GetWindowRect((HWND) LongToHandle(app->GetRenderHwnd()), &rect);

            int width, height, x, y;
            width = rect.right - rect.left - 1;
            height = rect.bottom - rect.top - 1;
            x = rect.left;
            y = rect.top;
            
            wxBitmap screenshot(width, height,-1);

            wxScreenDC dcScreen;            wxMemoryDC memDC;            memDC.SelectObject(screenshot);            memDC.Blit( 0, 0, width, height, &dcScreen, x, y  );                        memDC.SelectObject(wxNullBitmap);            screenshot.SaveFile(filename, wxBITMAP_TYPE_JPEG);
      }
      //else: cancelled by user
      if (m_pfocusedwindow)
            m_pfocusedwindow->SetFocus();

      event.Skip(); 
}

void GEUIDialog::ConnectedClicked( wxCommandEvent& event ) 
{ 
      if (m_cbConnected->GetValue())
      {
            m_bshouldcatchup = true;
      }

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
      int interval = m_stopwatch.Time();
      if (interval < CAMERA_MOVE_INTERVAL) // If it is less than CAMERA_MOVE_INTERVAL since last request, don't move the camera
      {
            LogDebugMessage(_T("GE View parameters request discarded - too soon after the previous action"));
            return false;
      }
      while ( m_bbusy ) ;
      m_bbusy = true;
      if (interval > CAMERA_MOVE_INTERVAL * 10)
            m_stopwatch.Start(); //Things got crazy, it's time to let it settle down...
      if(NULL != app && m_bgeisuseable)
      {
            LogDebugMessage(_T("Getting GE view parameters"));
            try
            {
                  ICameraInfoGE* camera;
                  app->raw_GetCamera(false, &camera);
                  lat = camera->FocusPointLatitude;
                  lon = camera->FocusPointLongitude;
                  alt = camera->FocusPointAltitude;
                  azimuth = camera->Azimuth;
                  range = camera->Range;
                  tilt = camera->Tilt;
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

void GEUIDialog::ConnectToGE()
{
      m_cbConnected->SetValue(true);
}