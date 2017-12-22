#pragma once
#include <wx/event.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/aui/aui.h>
#include <wx/sizer.h>
#include <wx/gbsizer.h>
#include "wxGUI/DisplayCanvas.h"

class MainFrame: public wxFrame{
public:
    MainFrame(wxWindow*,wxWindowID = -1);
    ~MainFrame();

private:

    static const long ID_AboutHelpSubItem;
    static const long ID_MainPanel;

    wxMenuBar* OnlyMenuBar;
    wxMenu* HelpMenu;
    wxMenuItem* AboutMItem;
    wxPanel* MainPanel;
    wxAuiManager* OnlyAuiManager;
    DisplayCanvas* MainCanvas;

    void CreateMenuBar();
    void CreateStatusBar();
    void OnAboutClick(wxCommandEvent&);
    void OnClick(wxEvent&);
    void CreateMainPanel();
};
