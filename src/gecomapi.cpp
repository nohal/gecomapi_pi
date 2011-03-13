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

#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <wx/msw/ole/automtn.h>
#include "wx/msw/ole/activex.h"

#include "gecomapi_pi.h"

#define WM_QT_PAINT 0xC2DC

GEUIDialog::GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem)
      :wxPanel(pparent, id, wxDefaultPosition, wxDefaultSize, wxBORDER_NONE, _T("GoogleEarth"))
{
      wxLogMessage(_T("Constructing the GE plugin window"));
      m_pauimgr = auimgr;
      m_toolbar_item_id = tbitem;
      m_ballowStart = false;

      m_pfocusedwindow = FindFocus();

      this->SetSizeHints( wxDefaultSize, wxDefaultSize );

      this->SetMinSize(wxSize(300, 300)); //Something like that it has to be to fit GE's GUI inside

      itemBoxSizer = new wxBoxSizer(wxVERTICAL);
      SetSizer(itemBoxSizer);

      m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	itemBoxSizer->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );
	
	m_buttonSaveKml = new wxButton( this, wxID_ANY, wxT("Save view as KML"), wxDefaultPosition, wxDefaultSize, 0 );
      itemBoxSizer->Add( m_buttonSaveKml, 0, wxALIGN_RIGHT|wxBOTTOM|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	this->Layout();
	
	this->Centre( wxBOTH );

      Connect(this->GetId(), wxEVT_SIZE, wxSizeEventHandler(GEUIDialog::OnSize));
      Connect(this->GetId(), wxEVT_SHOW, wxShowEventHandler(GEUIDialog::OnShow));
      
      app = NULL;

      m_bgeisuseable = false;
      m_binitializing = false;
      m_bclosed = false;

      //wxLogMessage(_T("GE plugin window created, going to start GE"));
      //GEInitialize();
      m_buttonSaveKml->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveViewAsKml ), NULL, this );
}

GEUIDialog::~GEUIDialog( )
{
      wxLogMessage(_T("Destroying the GE plugin window"));
      m_buttonSaveKml->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEUIDialog::SaveViewAsKml ), NULL, this );
      wxLogMessage(_T("Going to close GE"));
      GEClose();
}

void GEUIDialog::GEInitialize()
{
      wxLogMessage(_T("GE initialization requested"));
      wxLogMessage(_T("GE initialization requested"));
      if (NULL == app && !m_bgeisuseable & !m_binitializing & !m_bclosed) 
      {
            m_binitializing = true;
            wxLogMessage(_T("Initializing GE"));
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
                  wxLogMessage(_T("Error initializing GE"));
            }
            wxLogMessage(_T("GE Initialized, attaching to the window"));
            GEAttachWindow();
      }
}

void GEUIDialog::GEAttachWindow()
{
      wxLogMessage(_T("Attaching to GE window requested"));
      if (NULL != app && m_bgeisuseable)
      {
            wxLogMessage(_T("Attaching to the GE window"));
            try
            {
                 ShowWindowAsync((HWND) LongToHandle(app->GetMainHwnd()), 0);

                  //::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->GetHWND());
                  ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->m_panel1->GetHWND());
                  GEResize();
            }
            catch(...) {
                  wxLogMessage(_T("Error attaching to GE window"));
            }
            wxLogMessage(_T("GE window attached"));
      }
}

void GEUIDialog::GEResize()
{
      wxLogMessage(_T("GE resize requested"));
      if(NULL != app && m_bgeisuseable) 
      {
            wxLogMessage(_T("Resizing GE"));
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
                        this->GetSize().GetY() + 30, //FIXME: those 30 are just a wild guess based on observation - we should resize RenderHwnd - but how to not confuse GE?
                        SWP_FRAMECHANGED);

                  SendMessage((HWND) LongToHandle(app->GetRenderHwnd()), WM_COMMAND, WM_SIZE, 0);
            }
            catch(...) {
                  wxLogMessage(_T("Error resizing GE window"));
            }
            wxLogMessage(_T("GE resized"));
      }

      /*if(NULL != app && m_bgeisuseable) 
      {
            SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_PAINT, 0);
            PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QT_PAINT, 0, 0);

            SetWindowPos(
                  (HWND) LongToHandle(app->GetMainHwnd()),
                  HWND_TOP,
                  0,
                  0,
                  this->GetSize().GetX(),
                  this->GetSize().GetY(),
                  SWP_FRAMECHANGED);

            SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_SIZE, 0);
      }*/
}

void GEUIDialog::GEMoveCamera()
{
      wxLogMessage(_T("GE camera move requested"));
      if(NULL != app && m_bgeisuseable)
      {
            wxLogMessage(_T("Moving GE camera"));
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
                  wxLogMessage(_T("GE camera moved"));
            }
            catch(...) {
                  wxLogMessage(_T("Error moving GE camera"));
            }
      }
}

void GEUIDialog::SetCursorLatLon(double lat, double lon)
{
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;

      GEMoveCamera();
}

void GEUIDialog::SetBoatLatLon(double lat, double lon)
{
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;

      GEMoveCamera();
}

void GEUIDialog::SetViewPort(double lat, double lon, double geo_height, double geo_width, double rotation)
{
      //Lets compute a range. To make it easy, we will just look from the distance equal to half the chart viewport width at the centerpoint...
      m_camera_range = geo_width / 2 * 60 * 1852; //TODO: maybe decide which axis is better to use to set it to fit the same area to the window...
      m_camera_azimuth = rotation;
      m_camera_tilt = 0.0;
      m_hotspot_lon = lon;
      m_hotspot_lat = lat;
      
      GEMoveCamera();
}

void GEUIDialog::OnShow(wxShowEvent& event)
{
      wxLogMessage(_T("GE plugin - OnShow event"));
      if(m_ballowStart)
            GEInitialize();
      SetToolbarItemState(m_toolbar_item_id, IsShown());
      
      event.Skip();
}

void GEUIDialog::GEClose()
{
//is all of the following needed?
      wxLogMessage(_T("Closing GE requested"));
      if (NULL != app && m_bgeisuseable) 
      {
            wxLogMessage(_T("Closing GE"));
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
                  wxLogMessage(_T("Error closing GE"));
            }
            wxLogMessage(_T("GE closed"));
      }
}

void GEUIDialog::OnSize ( wxSizeEvent& event )
{
      wxLogMessage(_T("GE plugin - OnSize event"));
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
      wxLogMessage(_T("GE SetWindowWidth"));
      itemBoxSizer->Layout();
      itemBoxSizer->Fit(this);
      wxAuiPaneInfo &pi = m_pauimgr->GetPane(this);
      pi.MinSize(wxSize(width, width));
      pi.BestSize(wxSize(width, width));
      pi.FloatingSize(wxSize(width, width));
      m_pauimgr->Update();
      wxLogMessage(_T("GE window width set"));
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
      wxLogMessage(_T("GE View parameters requested"));
      if(NULL != app && m_bgeisuseable)
      {
            wxLogMessage(_T("Getting GE view parameters"));
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
                  wxLogMessage(_T("Error geting GE view parameters"));
            }
            wxLogMessage(_T("GE view parameters obtained"));
            return true;
      }
      return false;
}
