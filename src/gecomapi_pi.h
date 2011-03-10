/******************************************************************************
 * $Id: gecomapi_pi.h,v 1.0 2011/02/26 01:54:37 nohal Exp $
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

#ifndef _GECOMAPIPI_H_
#define _GECOMAPIPI_H_

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <wx/fileconf.h>
#include <wx/aui/aui.h>

#define     PLUGIN_VERSION_MAJOR    0
#define     PLUGIN_VERSION_MINOR    1

#define     MY_API_VERSION_MAJOR    1
#define     MY_API_VERSION_MINOR    2

#define GECOMAPI_TOOL_POSITION -1          // Request default positioning of toolbar tool

#include "../../../include/ocpn_plugin.h"

#include "gecomapi.h"


//----------------------------------------------------------------------------------------------------------
//    The PlugIn Class Definition
//----------------------------------------------------------------------------------------------------------

#define GECOMAPI_TOOL_POSITION      -1          // Request default positioning of toolbar tool
#define GECOMAPI_FOLLOW_CURSOR      1
#define GECOMAPI_FOLLOW_BOAT        2
#define GECOMAPI_FOLLOW_VIEW        3

class gecomapi_pi : public opencpn_plugin
{
public:
      gecomapi_pi(void *ppimgr);

//    The required PlugIn Methods
      int Init(void);
      bool DeInit(void);

      int GetAPIVersionMajor();
      int GetAPIVersionMinor();
      int GetPlugInVersionMajor();
      int GetPlugInVersionMinor();
      wxBitmap *GetPlugInBitmap();
      wxString GetCommonName();
      wxString GetShortDescription();
      wxString GetLongDescription();

//    The required override PlugIn Methods
      void SetCursorLatLon(double lat, double lon);
      void SetDefaults(void);

      int GetToolbarToolCount(void);
      
      void OnToolbarToolCallback(int id);

//    The optional plug-in method overlays
      void SetPositionFix(PlugIn_Position_Fix &pfix);
      void UpdateAuiStatus(void);

//    Other public methods
      

private:
      bool LoadConfig(void);
      bool SaveConfig(void);
      void ApplyConfig(void);

      wxFileConfig     *m_pconfig;
      wxWindow         *m_parent_window;
      wxAuiManager     *m_pauimgr;
      GEUIDialog       *m_pgecomapi_window;
      int               m_toolbar_item_id;

      int               m_iWindowWidth;
      int               m_iWhatToFollow;

      short             mPriPosition;
};

#endif
