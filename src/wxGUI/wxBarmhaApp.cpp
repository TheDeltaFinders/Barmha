/***************************************************************
 * Name:      wxBarmhaApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Prakash Gautam (pranphy@gmail.com)
 * Created:   2015-05-03
 * Copyright: Prakash Gautam (http://pranphy.com/)
 * License:
 **************************************************************/

#include "wxGUI/MainFrame.h"
#include "wxGUI/wxBarmhaApp.h"

IMPLEMENT_APP(wxBarmhaApp)

bool wxBarmhaApp::OnInit()
{
    //(*AppInitialize
    //wxInitAllImageHandlers();
    if ( true )
    {
        wxWindow* Parent = 0;
        MainFrame* Frame = new MainFrame(Parent);
        //new DisplayCanvas(Frame);
        Frame->Show();
        SetTopWindow(Frame);
    }
    //*)
    return true;

}