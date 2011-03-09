/******************************************************************************
 * $Id: gecomapi.h,v 1.8 2012/02/26 01:54:37 nohal Exp $
 *
 * Project:  OpenCPN
 * Purpose:  Google Earth Plugin Friends
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

class GEUIDialog: public wxDialog
{
      DECLARE_CLASS( GEUIDialog )
                  DECLARE_EVENT_TABLE()
      public:

            GEUIDialog( );

            ~GEUIDialog( );
            void Init();

            bool Create(  wxWindow *parent, gecomapi_pi *ppi, wxWindowID id = wxID_ANY,
                         const wxString& caption = _("Google Earth"),
                         const wxPoint& pos = wxDefaultPosition,
                         const wxSize& size = wxDefaultSize,
                         long style = wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU );

           void CreateControls();

           void SetCursorLatLon(double lat, double lon);

      private:
            void OnClose(wxCloseEvent& event);
            void OnMove( wxMoveEvent& event );
            void OnSize( wxSizeEvent& event );
            void ResizeGE();
            void MoveCamera();

            //    Data
            wxWindow          *pParent;
            gecomapi_pi       *pPlugIn;

            wxFont            *m_dFont;

            int               m_sequence_active;

            double            m_cursor_lat, m_cursor_lon;

            //Google Earth
            IApplicationGE	*app;
            ICameraInfoGE	*camera;
};


#endif
