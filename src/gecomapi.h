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

#include "gecomapicfgdlg.h"

//    Constants
#ifndef PI
#define PI        3.1415926535897931160E0      /* pi */
#endif

#define DONT_CONSIDER_VALUE   -999
#define CAMERA_MOVE_INTERVAL  200
#define BOAT_POSITIONS_STORED 50

#define SAVE_JPG              0
#define SAVE_KML              1
#define SAVE_GE2KAP           2

class gecomapi_pi;
class PositionsList;

class GEUIDialog: public wxPanel
{
      public:
            GEUIDialog(wxWindow *pparent, wxWindowID id, wxAuiManager *auimgr, int tbitem, gecomapi_pi *ppi);

            ~GEUIDialog( );

            void SetCursorLatLon(double lat, double lon);
            void SetBoatLatLon(double lat, double lon);
            void SetViewPort(double lat, double lon, double geo_height, double geo_width, double rotation);

            void SetWindowWidth(int width);
            void SetCameraParameters(int cameraAzimuth, int cameraTilt, int cameraRange);

            void ConnectToGE();

            void GEInitialize();
            void GEClose();

            //GoogleEarth
            IApplicationGE   *app;

            wxWindow         *m_pfocusedwindow;
            bool              m_ballowStart;

            void DetachIfNeeded(double plugin_azimuth, double plugin_range, double plugin_tilt);
            void ShowBoat(double lat, double lon);

            void GEResize();
            bool GEMoveCamera();
            bool GEReadViewParameters(double& lat, double& lon, double& alt, double& azimuth, double& range, double& tilt);
            void GEAttachWindow();
            void GEShowBoat(double lat, double lon);

            wxString encodeXMLEntities(wxString str);
            bool m_bgeisuseable;
      private:
            void OnSize( wxSizeEvent& event );
            void OnShow( wxShowEvent& event );
            void SaveViewAsKml( wxString filename, wxString viewname );
            void SaveViewAsJPG( wxString filename );
            void SaveViewAsGpx( wxString filename, wxString viewname );

            //    Data
            wxWindow         *pParent;
            gecomapi_pi      *pPlugIn;

            double            m_hotspot_lat, m_hotspot_lon;
            double            m_camera_range, m_camera_azimuth, m_camera_tilt;
            double            m_prev_camera_range, m_prev_camera_azimuth, m_prev_camera_tilt;

            wxAuiManager     *m_pauimgr;
            int               m_toolbar_item_id;
            wxPanel          *m_panel1;
            wxBoxSizer       *itemBoxSizer;
            wxBoxSizer       *itemBoxSizer1;
            wxCheckBox       *m_cbConnected;
            wxButton         *m_buttonSave;
            void              SaveView( wxCommandEvent& event );
            void              ConnectedClicked( wxCommandEvent& event );
            bool              m_binitializing;
            bool              m_bclosed;
            bool              m_bshouldcatchup;
            bool              m_bbusy;
            wxStopWatch       m_stopwatch, m_stopwatch_boat;

            PositionsList    *m_pPositions;
            wxString          m_sEnvelopeKmlFilename;
            wxString          m_sLiveKmlFilename;
            bool              m_bisfollowingboat;
};

class GESaveViewDlgImpl : public GESaveViewDlg
{
public:
      GESaveViewDlgImpl( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Save view"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE ) :
            GESaveViewDlg( parent, id, title, pos, size, style ) { m_sdbSizer2OK->Disable(); }
protected:
      void OnOkClick( wxCommandEvent& event );
      void CheckInput( wxCommandEvent& event );
      void CheckInput( wxFileDirPickerEvent& event );
private:
      void DoCheckInput();
};

class PositionReport
{
      public:
            PositionReport(double lat, double lon, wxDateTime ts);

            double            latitude;
            double            longitude;
            wxDateTime        timestamp;
};

WX_DECLARE_LIST(PositionReport, PositionsList);

const wxString    EmptyKml = _T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<kml xmlns=\"http://www.opengis.net/kml/2.2\" xmlns:gx=\"http://www.google.com/kml/ext/2.2\" xmlns:kml=\"http://www.opengis.net/kml/2.2\" xmlns:atom=\"http://www.w3.org/2005/Atom\">\n\
</kml>");

const wxString    EnvelopeKml = _T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<kml xmlns=\"http://www.opengis.net/kml/2.2\" xmlns:gx=\"http://www.google.com/kml/ext/2.2\" xmlns:kml=\"http://www.opengis.net/kml/2.2\" xmlns:atom=\"http://www.w3.org/2005/Atom\">\n\
<NetworkLink>\n\
<name>Realtime OpenCPN</name>\n\
<open>1</open>\n\
<Link>\n\
<href>%s</href>\n\
<refreshMode>onInterval</refreshMode>\n\
<refreshInterval>4</refreshInterval>\n\
<!--<viewRefreshMode>onRegion</viewRefreshMode>-->\n\
</Link>\n\
</NetworkLink>\n\
</kml>");

const wxString    LiveKml = _T("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<kml xmlns=\"http://www.opengis.net/kml/2.2\" xmlns:gx=\"http://www.google.com/kml/ext/2.2\">\n\
<Document>\n\
<name>BOAT position</name>\n\
<!-- Normal track style -->\n\
<Style id=\"track_n\">\n\
<LabelStyle>\n\
<scale>0</scale>\n\
</LabelStyle>\n\
<IconStyle>\n\
<scale>.5</scale>\n\
<Icon>\n\
<href>http://earth.google.com/images/kml-icons/track-directional/track-none.png</href>\n\
</Icon>\n\
</IconStyle>\n\
</Style>\n\
<!-- Highlighted track style -->\n\
<Style id=\"track_h\">\n\
<IconStyle>\n\
<scale>1.2</scale>\n\
<Icon>\n\
<href>http://earth.google.com/images/kml-icons/track-directional/track-none.png</href>\n\
</Icon>\n\
</IconStyle>\n\
</Style>\n\
<StyleMap id=\"track\">\n\
<Pair>\n\
<key>normal</key>\n\
<styleUrl>#track_n</styleUrl>\n\
</Pair>\n\
<Pair>\n\
<key>highlight</key>\n\
<styleUrl>#track_h</styleUrl>\n\
</Pair>\n\
</StyleMap>\n\
<!-- Normal waypoint style -->\n\
<Style id=\"waypoint_n\">\n\
<IconStyle>\n\
<Icon>\n\
<href>http://maps.google.com/mapfiles/kml/pal4/icon61.png</href>\n\
</Icon>\n\
</IconStyle>\n\
</Style>\n\
<!-- Highlighted waypoint style -->\n\
<Style id=\"waypoint_h\">\n\
<IconStyle>\n\
<scale>1.2</scale>\n\
<Icon>\n\
<href>http://maps.google.com/mapfiles/kml/pal4/icon61.png</href>\n\
</Icon>\n\
</IconStyle>\n\
</Style>\n\
<StyleMap id=\"waypoint\">\n\
<Pair>\n\
<key>normal</key>\n\
<styleUrl>#waypoint_n</styleUrl>\n\
</Pair>\n\
<Pair>\n\
<key>highlight</key>\n\
<styleUrl>#waypoint_h</styleUrl>\n\
</Pair>\n\
</StyleMap>\n\
<Style id=\"lineStyle\">\n\
<LineStyle>\n\
<color>640000ff</color>\n\
<width>6</width>\n\
</LineStyle>\n\
</Style>\n\
<Placemark>\n\
<name>Position</name>\n\
<visibility>%u</visibility>\n\
<!--<TimeStamp><when>2010-06-12T14:55:28Z</when></TimeStamp>-->\n\
<Style>\n\
<IconStyle>\n\
<Icon>\n\
<href>http://earth.google.com/images/kml-icons/youarehere-0.png</href>\n\
</Icon>\n\
</IconStyle>\n\
</Style>\n\
<Point>\n\
<coordinates>%f,%f,0.000000</coordinates>\n\
</Point>\n\
</Placemark>\n\
<!--<TimeSpan>\n\
<begin>2010-06-12T14:53:24Z</begin>\n\
<end>2012-06-12T14:55:23Z</end>\n\
</TimeSpan>-->\n\
<Placemark>\n\
<name>Path</name>\n\
<visibility>%u</visibility>\n\
<styleUrl>#lineStyle</styleUrl>\n\
<LineString>\n\
<tessellate>1</tessellate>\n\
<coordinates>\n\
%s\n\
</coordinates>\n\
</LineString>\n\
</Placemark>\n\
</Document>\n\
</kml>");

#endif
