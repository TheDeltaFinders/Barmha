#include "wxGUI/MainFrame.h"
//#include "wxGUI/DisplayCanvas.h"
#include <wx/msgdlg.h>

const long MainFrame::ID_AboutHelpSubItem = wxNewId();
const long MainFrame::ID_MainPanel = wxNewId();

MainFrame::MainFrame(wxWindow* Parent, wxWindowID id)  {
    Create(Parent, id, _("Barmha"), wxDefaultPosition, 
            wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));

    SetClientSize(wxSize(640, 480));
    SetMinSize(wxSize(400,300));
    CreateMenuBar();
    // this->Connect( ID_AboutHelpSubItem, wxEVT_COMMAND_MENU_SELECTED, 
    //      MainFrame::OnAboutClick );   

    OnlyAuiManager = new wxAuiManager(this, wxAUI_MGR_DEFAULT);
    CreateMainPanel();
    OnlyAuiManager->AddPane(MainPanel, wxAuiPaneInfo().Name(_T("PaneName")).
            CenterPane().Caption(_("Main Panel")).CaptionVisible().Row(1));

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

void MainFrame::OnAboutClick(wxCommandEvent& evt)
{
    wxMessageBox("Hello there ","I am here");
}

void  MainFrame::CreateMainPanel()
{

    wxGridBagSizer* MainGBSizer;
    MainGBSizer = new wxGridBagSizer(0, 0);
    MainGBSizer->AddGrowableCol(0);
    MainGBSizer->AddGrowableRow(0);


    MainPanel = new wxPanel(this,ID_MainPanel, wxDefaultPosition, wxDefaultSize, 
            wxTAB_TRAVERSAL,_T("ID_MainPanel"));
    wxStaticBoxSizer* MainSBSizer = new wxStaticBoxSizer(wxHORIZONTAL, MainPanel, "Output Screen");
    
    MainGBSizer->Add(MainSBSizer,wxGBPosition(0,0),wxDefaultSpan, 
            wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,5);

    MainPanel->SetSizer(MainGBSizer);
    MainGBSizer->Fit(MainPanel);
    MainGBSizer->SetSizeHints(MainPanel);
    MainCanvas = new DisplayCanvas(MainPanel);
    //MainSBSizer->Add(MainCanvas,1, 
    //        wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,5);
}

