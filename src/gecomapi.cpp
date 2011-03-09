/******************************************************************************
 *
 *
 * Project:  OpenCPN
 * Purpose:  Google Earth plugin Implementation
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

IMPLEMENT_CLASS ( GEUIDialog, wxDialog )

BEGIN_EVENT_TABLE ( GEUIDialog, wxDialog )

            EVT_CLOSE ( GEUIDialog::OnClose )
            EVT_MOVE ( GEUIDialog::OnMove )
            EVT_SIZE ( GEUIDialog::OnSize )

END_EVENT_TABLE()


GEUIDialog::GEUIDialog( )
{
      Init();
}

GEUIDialog::~GEUIDialog( )
{
      CoUninitialize();
}


void GEUIDialog::Init( )
{
      m_sequence_active = -1;
      //COM initialization
      CoInitialize(NULL);
}


bool GEUIDialog::Create ( wxWindow *parent, gecomapi_pi *ppi, wxWindowID id,
                              const wxString& caption,
                              const wxPoint& pos, const wxSize& size, long style )
{
      pParent = parent;
      pPlugIn = ppi;

      //    As a display optimization....
      //    if current color scheme is other than DAY,
      //    Then create the dialog ..WITHOUT.. borders and title bar.
      //    This way, any window decorations set by external themes, etc
      //    will not detract from night-vision

      long wstyle = wxDEFAULT_FRAME_STYLE;

      wxSize size_min = size;
      if ( !wxDialog::Create ( parent, id, caption, pos, size_min, wstyle ) )
            return false;

      CreateControls();

      Fit();
      SetMinSize(GetBestSize());

      return true;
}

void GEUIDialog::CreateControls()
{
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
      ShowWindowAsync((HWND) LongToHandle(app->GetMainHwnd()), 0);

      long	is_initialized;
	do {
		is_initialized = app->IsInitialized();
	} while ( is_initialized == 0 );

      ::SetParent((HWND) LongToHandle(app->GetRenderHwnd()), (HWND)this->GetHWND());
      
      ResizeGE();
      MoveCamera();
}

void GEUIDialog::ResizeGE()
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

void GEUIDialog::MoveCamera()
{
    app->raw_GetCamera(false, &camera);
    OLE_HANDLE hwnd = app->GetMainHwnd();

    app->raw_GetCamera(false, &camera);
    camera->PutFocusPointLatitude(m_cursor_lat);
    camera->PutFocusPointLongitude(m_cursor_lon);
    camera->PutAzimuth(0.0); //north up
    camera->PutFocusPointAltitude(0.0); //focus point on sea level
    camera->PutRange(1000.0); //camera 1000 meters high
    camera->PutTilt(0.0); //camera directly over a focus point
    app->raw_SetCamera(camera, 1.0); //1.0 - how fast the camera gets there
}

void GEUIDialog::SetCursorLatLon(double lat, double lon)
{
      m_cursor_lon = lon;
      m_cursor_lat = lat;

      MoveCamera();
}

void GEUIDialog::OnClose ( wxCloseEvent& event )
{
      RequestRefresh(pParent);

      //is all of the following needed?
      SendMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_COMMAND, WM_QUIT, 0);
      PostMessage((HWND) LongToHandle(app->GetMainHwnd()), WM_QUIT, 0, 0);
      app->Release();
      app = NULL;
      
      Destroy();
      pPlugIn->OnGEDialogClose();
}

void GEUIDialog::OnMove ( wxMoveEvent& event )
{
      //    Record the dialog position
      wxPoint p = event.GetPosition();
      pPlugIn->SetGEDialogX(p.x);
      pPlugIn->SetGEDialogY(p.y);

      event.Skip();
}

void GEUIDialog::OnSize ( wxSizeEvent& event )
{
      //    Record the dialog size
      wxSize p = event.GetSize();
      pPlugIn->SetGEDialogSizeX(p.x);
      pPlugIn->SetGEDialogSizeY(p.y);
      
      ResizeGE();

      event.Skip();
}

void gecomapi_pi::OnGEDialogClose()
{
      SetToolbarItemState(m_toolbar_item_id, false);
      m_pGEDialog = NULL;
}