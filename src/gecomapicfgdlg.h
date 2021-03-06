///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 22 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gecomapicfgdlg__
#define __gecomapicfgdlg__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/radiobut.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/dialog.h>
#include <wx/textctrl.h>
#include <wx/radiobox.h>
#include <wx/filepicker.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GEPrefsDlg
///////////////////////////////////////////////////////////////////////////////
class GEPrefsDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText5;
		
		// Virtual event handlers, overide them in your derived class
		void BtnTogled( wxCommandEvent& event );
		void ResetToDefaults( wxCommandEvent& event );
		
	
	public:
		wxRadioButton* m_radioFlwView;
		wxRadioButton* m_radioFlwBoat;
		wxRadioButton* m_radioFlwCursor;
		wxRadioButton* m_radioDontFollow;
		wxCheckBox* m_cbStartHidden;
		wxCheckBox* m_cbAutodisconnect;
		wxCheckBox* m_cbUpdateSettingsFromGE;
		wxCheckBox* m_cbShowBoatInGE;
		wxStaticText* m_staticText1;
		wxSlider* m_Azimuthslider;
		wxStaticText* m_staticText2;
		wxSlider* m_Tiltslider;
		wxStaticText* m_staticText3;
		wxSlider* m_Rangeslider;
		wxButton* m_btnResetToDefaults;
		wxSlider* m_Transparencyslider;
		wxStdDialogButtonSizer* m_sdbButtonsSizer;
		wxButton* m_sdbButtonsSizerOK;
		wxButton* m_sdbButtonsSizerCancel;
		
		GEPrefsDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("GoogleEarth Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~GEPrefsDlg();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GESaveViewDlg
///////////////////////////////////////////////////////////////////////////////
class GESaveViewDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText5;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		wxButton* m_sdbSizer2Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CheckInput( wxCommandEvent& event ) { event.Skip(); }
		virtual void CheckInput( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void OnOkClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxTextCtrl* m_tViewName;
		wxRadioBox* m_rFormat;
		wxFilePickerCtrl* m_fpPath;
		
		GESaveViewDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Save view"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~GESaveViewDlg();
	
};

#endif //__gecomapicfgdlg__
