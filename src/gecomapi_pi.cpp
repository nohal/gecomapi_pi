/******************************************************************************
 * $Id: gecomapi_pi.cpp,v 1.0 2011/02/26 01:54:37 nohal Exp $
 *
 * Project:  OpenCPN
 * Purpose:  Google Earth Plugin
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
}

int gecomapi_pi::Init(void)
{
      m_pGEDialog = NULL;

      AddLocaleCatalog( _T("opencpn-gecomapi_pi") );

      //    Get a pointer to the opencpn display canvas, to use as a parent for the POI Manager dialog
      m_parent_window = GetOCPNCanvasWindow();

      //    This PlugIn needs a toolbar icon
      m_toolbar_item_id  = InsertPlugInTool(_T(""), _img_gecomapi, _img_gecomapi, wxITEM_CHECK,
            _("Google Earth"), _T(""), NULL, GECOMAPI_TOOL_POSITION, 0, this);

      return (WANTS_OVERLAY_CALLBACK |
           WANTS_CURSOR_LATLON       |
           WANTS_TOOLBAR_CALLBACK    |
           INSTALLS_TOOLBAR_TOOL
            );      
}

bool gecomapi_pi::DeInit(void)
{
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
      return _("GECOMAPI");
}


wxString gecomapi_pi::GetShortDescription()
{
      return _("Google Earth PlugIn for OpenCPN");
}

wxString gecomapi_pi::GetLongDescription()
{
      return _("Google Earth PlugIn for OpenCPN\nConquers the world");
}

void gecomapi_pi::SetCursorLatLon(double lat, double lon)
{
      if(m_pGEDialog)
      {
            m_pGEDialog->SetCursorLatLon(lat, lon);
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
      // show the Google Earth dialog
      if(NULL == m_pGEDialog)
      {
            m_pGEDialog = new GEUIDialog();
            //m_pGEDialog->Create ( m_parent_window, this, -1, _("Google Earth"),
            //                   wxPoint( m_gecomapi_dialog_x, m_gecomapi_dialog_y), wxSize( m_gecomapi_dialog_sx, m_gecomapi_dialog_sy));
            m_pGEDialog->Create ( m_parent_window, this, -1, _("Google Earth"));

            m_pGEDialog->Show();                        // Show modeless, so it stays on the screen
      }
      else 
      {
            m_pGEDialog->Hide();
            m_pGEDialog->Close();
            delete (m_pGEDialog);
            m_pGEDialog = NULL;
      }
      
}