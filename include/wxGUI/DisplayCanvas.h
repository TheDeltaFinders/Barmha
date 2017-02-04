#ifndef DISPLAYCANVAS_H
#define DISPLAYCANVAS_H

#include <wx/wx.h>
#include <wx/glcanvas.h>
#include <wx/event.h>

class DisplayCanvas : public wxGLCanvas
{
    public:
        DisplayCanvas(wxWindow*);

        void   Initialize();

    protected:
        DECLARE_EVENT_TABLE()
    private:

        wxGLContext* MyContext;

        static const long ID_DisplayCanvas;

        void OnPaint(wxPaintEvent&);
        void OnKeyPress(wxKeyEvent&);
        void Render();

};

#endif // DISPLAYCANVAS_H
