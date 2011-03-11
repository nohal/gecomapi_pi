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

#include <stdlib.h>
#include <math.h>
#include <time.h>

#include <wx/msw/ole/automtn.h>
#include "wx/msw/ole/activex.h"

#include "gecomapi_pi.h"

#define WM_QT_PAINT 0xC2DC

GEUIDialog::GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem)
      :wxWindow(pparent, id, wxDefaultPosition, wxDefaultSize, wxBORDER_NONE, _T("GoogleEarth"))
{
      m_pauimgr = auimgr;
      m_toolbar_item_id = tbitem;

      itemBoxSizer = new wxBoxSizer(wxVERTICAL);
      SetSizer(itemBoxSizer);

      Connect(this->GetId(), wxEVT_SIZE, wxSizeEventHandler(GEUIDialog::OnSize));
      Connect(this->GetId(), wxEVT_SHOW, wxShowEventHandler(GEUIDialog::OnShow));
      
      app = NULL;

      m_bgeisuseable = false;

      GEInitialize();
}

GEUIDialog::~GEUIDialog( )
{
      GEClose();
}

void GEUIDialog::GEInitialize()
{
      if (NULL == app && !m_bgeisuseable) 
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
            GEAttachWindow();
      }
}

void GEUIDialog::GEAttachWindow()
{
      if (NULL != app && m_bgeisuseable)
      {
            ShowWindowAsync((HWND) LongToHandle(app->GetMainHwnd()), 0);

            ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->GetHWND());
      }
}

void GEUIDialog::GEResize()
{
      if(NULL != app && m_bgeisuseable) 
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
      }
}

void GEUIDialog::GEMoveCamera()
{
      if(NULL != app && m_bgeisuseable)
      {
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
            app->SetCameraParams(m_hotspot_lat, m_hotspot_lon, 0.0, AbsoluteAltitudeGE, m_camera_range, m_camera_tilt, m_camera_azimuth, 1.0);
            }
            catch(...) {
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
      SetToolbarItemState(m_toolbar_item_id, IsShown());
      
      event.Skip();
}

void GEUIDialog::GEClose()
{
//is all of the following needed?
      if (NULL != app && m_bgeisuseable) 
      {
            m_bgeisuseable = false;
            SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_QUIT, 0);
            PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QUIT, 0, 0);
            /*long is_initialized;
            do {
	            is_initialized = app->IsInitialized();
            } while ( is_initialized != 0 );*/
            app->Release();
            //delete app;
            app = NULL;
      }
}

void GEUIDialog::OnSize ( wxSizeEvent& event )
{      
      GEResize();

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
      itemBoxSizer->Layout();
      itemBoxSizer->Fit(this);
      wxAuiPaneInfo &pi = m_pauimgr->GetPane(this);
      pi.MinSize(wxSize(width, width));
      pi.BestSize(wxSize(width, width));
      pi.FloatingSize(wxSize(width, width));
      m_pauimgr->Update();
}

