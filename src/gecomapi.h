/******************************************************************************
 * $Id: gecomapi.h,v 1.8 2012/02/26 01:54:37 nohal Exp $
 *
 * Project:  OpenCPN
 * Purpose:  GoogleEarth Plugin Friends
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

#ifndef _GECOMAPI_H_
#define _GECOMAPI_H_


#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#import "earth/earth.tlb" no_namespace, named_guids
//#include "earth/earth.h"

class gecomapi_pi;

class GEUIDialog: public wxWindow
{
      public:

            GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem);

            ~GEUIDialog( );

            void CreateControls();

            void SetCursorLatLon(double lat, double lon);
            void SetBoatLatLon(double lat, double lon);

            void SetWindowWidth(int width);

            void GEInitialize();
            void GEClose();

            //GoogleEarth
            IApplicationGE   *app;

      private:
            void OnSize( wxSizeEvent& event );
            void OnShow( wxShowEvent& event );
            void GEResize();
            void GEMoveCamera();
            
            void GEAttachWindow();

            //    Data
            wxWindow         *pParent;
            gecomapi_pi      *pPlugIn;

            double            m_cursor_lat, m_cursor_lon;

            //GoogleEarth
            ICameraInfoGE    *camera;

            wxAuiManager     *m_pauimgr;
            int               m_toolbar_item_id;
            wxBoxSizer*       itemBoxSizer;
            bool              m_bgeisuseable;
};


#endif
