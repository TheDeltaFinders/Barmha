#pragma once
#include <wx/event.h>
#include <wx/frame.h>
#include <wx/menu.h>
class MainFrame: public wxFrame{
public:
    MainFrame(wxWindow*,wxWindowID = -1);
    ~MainFrame();

private:

    static const long ID_AboutHelpSubItem;

    wxMenuBar* OnlyMenuBar;
    wxMenu* HelpMenu;
    wxMenuItem* AboutMItem;

    void CreateMenuBar();
    void CreateStatusBar();
    void OnAboutClick(wxCommandEvent&);
};