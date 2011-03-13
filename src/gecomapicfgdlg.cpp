///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gecomapicfgdlg.h"

///////////////////////////////////////////////////////////////////////////

GEPrefsDlg::GEPrefsDlg( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bMainSizer;
	bMainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbPrefsSizer;
	sbPrefsSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("label") ), wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_radioFlwView = new wxRadioButton( this, wxID_ANY, _("Follow chart viewport"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_radioFlwView, 0, wxALL, 5 );
	
	m_radioFlwBoat = new wxRadioButton( this, wxID_ANY, _("Follow boat"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_radioFlwBoat, 0, wxALL, 5 );
	
	m_radioFlwCursor = new wxRadioButton( this, wxID_ANY, _("Follow cursor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_radioFlwCursor, 0, wxALL, 5 );
	
	bSizer2->Add( bSizer3, 0, 0, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_cbStartHidden = new wxCheckBox( this, wxID_ANY, _("Always start hidden"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_cbStartHidden, 0, wxALL, 5 );
	
	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );
	
	sbPrefsSizer->Add( bSizer2, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbViewPropsSizer;
	sbViewPropsSizer = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("View properties") ), wxVERTICAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Camera azimuth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	sbViewPropsSizer->Add( m_staticText1, 0, wxALL, 5 );
	
	m_Azimuthslider = new wxSlider( this, wxID_ANY, 0, -180, 180, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbViewPropsSizer->Add( m_Azimuthslider, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Camera Tilt"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	sbViewPropsSizer->Add( m_staticText2, 0, wxALL, 5 );
	
	m_Tiltslider = new wxSlider( this, wxID_ANY, 0, 0, 90, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbViewPropsSizer->Add( m_Tiltslider, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, _("Camera Range"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	sbViewPropsSizer->Add( m_staticText3, 0, wxALL, 5 );
	
	m_Rangeslider = new wxSlider( this, wxID_ANY, 10000, 0, 20000, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL|wxSL_LABELS );
	sbViewPropsSizer->Add( m_Rangeslider, 0, wxALL|wxEXPAND, 5 );
	
	m_btnResetToDefaults = new wxButton( this, wxID_ANY, _("Reset to defaults"), wxDefaultPosition, wxDefaultSize, 0 );
	sbViewPropsSizer->Add( m_btnResetToDefaults, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	sbPrefsSizer->Add( sbViewPropsSizer, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	bMainSizer->Add( sbPrefsSizer, 1, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	m_sdbButtonsSizer = new wxStdDialogButtonSizer();
	m_sdbButtonsSizerOK = new wxButton( this, wxID_OK );
	m_sdbButtonsSizer->AddButton( m_sdbButtonsSizerOK );
	m_sdbButtonsSizerCancel = new wxButton( this, wxID_CANCEL );
	m_sdbButtonsSizer->AddButton( m_sdbButtonsSizerCancel );
	m_sdbButtonsSizer->Realize();
	bMainSizer->Add( m_sdbButtonsSizer, 0, wxBOTTOM|wxEXPAND|wxLEFT|wxRIGHT|wxTOP, 5 );
	
	this->SetSizer( bMainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_radioFlwView->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_radioFlwBoat->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_radioFlwCursor->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_btnResetToDefaults->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEPrefsDlg::ResetToDefaults ), NULL, this );
}

GEPrefsDlg::~GEPrefsDlg()
{
	// Disconnect Events
	m_radioFlwView->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_radioFlwBoat->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_radioFlwCursor->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( GEPrefsDlg::BtnTogled ), NULL, this );
	m_btnResetToDefaults->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GEPrefsDlg::ResetToDefaults ), NULL, this );
	
}
