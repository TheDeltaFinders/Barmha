#include "wxGUI/MainFrame.h"

#include <wx/msgdlg.h>

const long MainFrame::ID_AboutHelpSubItem = wxNewId();

MainFrame::MainFrame(wxWindow* Parent, wxWindowID id){
    Create(Parent, id, _("Barmha"), wxDefaultPosition, 
            wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));

    SetClientSize(wxSize(640, 480));
    SetMinSize(wxSize(400,300));
    CreateMenuBar();
    // this->Connect( ID_AboutHelpSubItem, wxEVT_COMMAND_MENU_SELECTED, 
    //      MainFrame::OnAboutClick );   

    this->Bind(wxEVT_COMMAND_MENU_SELECTED, &MainFrame::OnAboutClick,this, ID_AboutHelpSubItem);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ;
}

MainFrame::~MainFrame(){

}


void MainFrame::CreateMenuBar(){
    OnlyMenuBar = new wxMenuBar();
    HelpMenu = new wxMenu();
    AboutMItem = new wxMenuItem(HelpMenu, ID_AboutHelpSubItem, _("About\tCtrl+H"), 
            _("Show details of this application"), wxITEM_NORMAL);
    HelpMenu->Append(AboutMItem);
    OnlyMenuBar->Append(HelpMenu, _("Help"));
    SetMenuBar(OnlyMenuBar);

}

void MainFrame::CreateStatusBar(){

}

void OnAboutClick(wxCommandEvent& evt)
{
    wxMessageBox("Hello there ","I am here");
}

