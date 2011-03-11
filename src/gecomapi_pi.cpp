/******************************************************************************
 * $Id: gecomapi_pi.cpp,v 1.0 2011/02/26 01:54:37 nohal Exp $
 *
 * Project:  OpenCPN
 * Purpose:  GoogleEarth Plugin
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
 */


#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include "gecomapi_pi.h"
#include "gecomapi.h"


// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new gecomapi_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}

//---------------------------------------------------------------------------------------------------------
//
//    POI Manager PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------

#include "icons.h"

//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------

gecomapi_pi::gecomapi_pi(void *ppimgr)
      :opencpn_plugin(ppimgr)
{
      // Create the PlugIn icons
      initialize_images();

      m_pgecomapi_window = NULL;
}

int gecomapi_pi::Init(void)
{
      mPriPosition = 99;

      m_pgecomapi_window = NULL;

      AddLocaleCatalog( _T("opencpn-gecomapi_pi") );

      //    Get a pointer to the opencpn display canvas, to use as a parent for the POI Manager dialog
      m_parent_window = GetOCPNCanvasWindow();

      m_pauimgr = GetFrameAuiManager();

      //    Get a pointer to the opencpn configuration object
      m_pconfig = GetOCPNConfigObject();

      //    And load the configuration items
      LoadConfig();

      //    This PlugIn needs a toolbar icon
      m_toolbar_item_id  = InsertPlugInTool(_T(""), _img_gecomapi, _img_gecomapi, wxITEM_CHECK,
            _("GoogleEarth"), _T(""), NULL, GECOMAPI_TOOL_POSITION, 0, this);

      m_pgecomapi_window = new GEUIDialog(GetOCPNCanvasWindow(), wxID_ANY, m_pauimgr, m_toolbar_item_id);
      m_pauimgr->AddPane(m_pgecomapi_window, wxAuiPaneInfo().Name(_T("GoogleEarth")).Caption(_("GoogleEarth")).CaptionVisible(true).Float().FloatingPosition(0,0).TopDockable(false).BottomDockable(false).Show(false).CloseButton(false));
      m_pauimgr->Update();

      ApplyConfig();

      return (WANTS_OVERLAY_CALLBACK |
           WANTS_CURSOR_LATLON       |
           WANTS_TOOLBAR_CALLBACK    |
           INSTALLS_TOOLBAR_TOOL     |
           WANTS_PREFERENCES         |
           WANTS_CONFIG              |
           WANTS_NMEA_EVENTS         |
           WANTS_NMEA_SENTENCES      |
           USES_AUI_MANAGER          |
           WANTS_ONPAINT_VIEWPORT
            );      
}

bool gecomapi_pi::DeInit(void)
{
      if(m_pgecomapi_window)
      {
            m_pauimgr->DetachPane(m_pgecomapi_window);
            //m_pgecomapi_window->GEClose();
            m_pgecomapi_window->Close();
            m_pgecomapi_window->Destroy();
      }

      return true;
}

int gecomapi_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int gecomapi_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int gecomapi_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int gecomapi_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxBitmap *gecomapi_pi::GetPlugInBitmap()
{
      return _img_gecomapi_pi;
}

wxString gecomapi_pi::GetCommonName()
{
      return _("GoogleEarth");
}


wxString gecomapi_pi::GetShortDescription()
{
      return _("GoogleEarth PlugIn for OpenCPN");
}

wxString gecomapi_pi::GetLongDescription()
{
      return _("GoogleEarth PlugIn for OpenCPN\nConquers the world");
}

void gecomapi_pi::SetCursorLatLon(double lat, double lon)
{
      if(m_iWhatToFollow == GECOMAPI_FOLLOW_CURSOR && m_pgecomapi_window)
      {
            m_pgecomapi_window->SetCursorLatLon(lat, lon);
      }
}

void gecomapi_pi::SetDefaults(void)
{
}


int gecomapi_pi::GetToolbarToolCount(void)
{
      return 1;
}

void gecomapi_pi::OnToolbarToolCallback(int id)
{
      if(NULL == m_pgecomapi_window)
            return;

      wxAuiPaneInfo &pane = m_pauimgr->GetPane(m_pgecomapi_window);
      if(!pane.IsOk())
            return;

      pane.Show(!pane.IsShown());
      // Toggle is handled by the toolbar but we must keep plugin manager b_toggle updated
      // to actual status to ensure right status upon toolbar rebuild
      SetToolbarItemState(m_toolbar_item_id, pane.IsShown());
      m_pauimgr->Update();

      if (NULL != m_pgecomapi_window->app)
      {
            if (!pane.IsShown())
            {
                  //m_pgecomapi_window->GEClose();
            }
      }
      else
      {
            if (pane.IsShown())
            {
                  //m_pgecomapi_window->GEInitialize();
            }
      }
}



void gecomapi_pi::UpdateAuiStatus(void)
{
      //    This method is called after the PlugIn is initialized
      //    and the frame has done its initial layout, possibly from a saved wxAuiManager "Perspective"
      //    It is a chance for the PlugIn to syncronize itself internally with the state of any Panes that
      //    were added to the frame in the PlugIn ctor.

      //    We use this callback here to keep the context menu selection in sync with the window state

  
      wxAuiPaneInfo &pane = m_pauimgr->GetPane(m_pgecomapi_window);
      if(!pane.IsOk())
            return;

      SetToolbarItemState(m_toolbar_item_id, pane.IsShown());
}

void gecomapi_pi::SetCurrentViewPort(PlugIn_ViewPort &vp)
{
      if(m_iWhatToFollow == GECOMAPI_FOLLOW_VIEW && m_pgecomapi_window)
      {
            m_pgecomapi_window->SetViewPort(vp.clat, vp.clon, vp.lat_max - vp.lat_min, vp.lon_max - vp.lon_min, vp.rotation);
      }
}

void gecomapi_pi::SetPositionFix(PlugIn_Position_Fix &pfix)
{
      if(m_iWhatToFollow == GECOMAPI_FOLLOW_BOAT && m_pgecomapi_window)
      {
            if (mPriPosition >= 1)
            {
                  mPriPosition = 1;
                  m_pgecomapi_window->SetCursorLatLon(pfix.Lat, pfix.Lon);
            }
      }
}


bool gecomapi_pi::LoadConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath( _T("/PlugIns/GoogleEarth") );

            wxString config;

            pConf->Read( _T("WindowWidth"), &m_iWindowWidth, 300 );
            pConf->Read( _T("WhatToFollow"), &m_iWhatToFollow, GECOMAPI_FOLLOW_VIEW ); //1-Cursor, 2-boat, 3-View
            pConf->Read( _T("CameraAzimuth"), &m_iCameraAzimuth, 0 );
            pConf->Read( _T("CameraTilt"), &m_iCameraTilt, 0 );
            pConf->Read( _T("CameraRange"), &m_iCameraRange, 0 );
            return true;
      }
      else
            return false;
}

bool gecomapi_pi::SaveConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath( _T( "/PlugIns/GoogleEarth" ) );
            pConf->Write( _T( "WindowWidth" ), m_iWindowWidth );
            pConf->Write( _T( "WhatToFollow" ), m_iWhatToFollow );
            pConf->Write( _T( "CameraAzimuth" ), m_iCameraAzimuth );
            pConf->Write( _T( "CameraTilt" ), m_iCameraTilt );
            pConf->Write( _T( "CameraRange" ), m_iCameraRange );

            return true;
      }
      else
            return false;
}

void gecomapi_pi::ApplyConfig(void)
{
      if(m_pgecomapi_window)
      {
            m_pgecomapi_window->SetWindowWidth(m_iWindowWidth);
            m_pgecomapi_window->SetCameraParameters(m_iCameraAzimuth, m_iCameraTilt, m_iCameraRange);
      }
}


void gecomapi_pi::ShowPreferencesDialog( wxWindow* parent )
{
      GEPrefsDlg *dialog = new GEPrefsDlg( parent, wxID_ANY );

      dialog->m_Azimuthslider->SetValue(m_iCameraAzimuth);
      dialog->m_Tiltslider->SetValue(m_iCameraTilt);
      dialog->m_Rangeslider->SetValue(m_iCameraRange);
      switch(m_iWhatToFollow)
      {
            case GECOMAPI_FOLLOW_BOAT:
                  dialog->m_radioFlwBoat->SetValue(true);
                  break;
            case GECOMAPI_FOLLOW_CURSOR:
                  dialog->m_radioFlwCursor->SetValue(true);
                  break;
            case GECOMAPI_FOLLOW_VIEW:
                  dialog->m_radioFlwView->SetValue(true);
                  dialog->m_Azimuthslider->Disable();
                  dialog->m_Tiltslider->Disable();
                  dialog->m_Rangeslider->Disable();
                  dialog->m_btnResetToDefaults->Disable();
                  break;
      }

      if(dialog->ShowModal() == wxID_OK)
      {
            m_iCameraAzimuth = dialog->m_Azimuthslider->GetValue();
            m_iCameraTilt = dialog->m_Tiltslider->GetValue();
            m_iCameraRange = dialog->m_Rangeslider->GetValue();
            if (dialog->m_radioFlwBoat->GetValue())
                  m_iWhatToFollow = GECOMAPI_FOLLOW_BOAT;
            if (dialog->m_radioFlwCursor->GetValue())
                  m_iWhatToFollow = GECOMAPI_FOLLOW_CURSOR;
            if (dialog->m_radioFlwView->GetValue())
                  m_iWhatToFollow = GECOMAPI_FOLLOW_VIEW;

            SaveConfig();
            ApplyConfig();
            // WAS IST DAS? SetToolbarItemState( m_toolbar_item_id, GetDashboardWindowShownCount()==0 );
      }
      dialog->Destroy();
}

void GEPrefsDlg::ResetToDefaults(wxCommandEvent& event)
{
      m_Azimuthslider->SetValue(0);
      m_Tiltslider->SetValue(0);
      m_Rangeslider->SetValue(10000);

      event.Skip();
}

void GEPrefsDlg::BtnTogled(wxCommandEvent& event)
{
      if(m_radioFlwView->GetValue())
      {
            m_Azimuthslider->Disable();
            m_Tiltslider->Disable();
            m_Rangeslider->Disable();
            m_btnResetToDefaults->Disable();
      }
      else
      {
            m_Azimuthslider->Enable();
            m_Tiltslider->Enable();
            m_Rangeslider->Enable();
            m_btnResetToDefaults->Enable();
      }

      event.Skip();
}