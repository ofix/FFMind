/***************************************************************
 * Name:      FFMindMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Tom Song (981326632@qq.com)
 * Created:   2019-09-20
 * Copyright: Tom Song (http://www.xiaocaihong.com.cn)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "../wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "FFMindMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


FFMindFrame::FFMindFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

FFMindFrame::~FFMindFrame()
{
}

void FFMindFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void FFMindFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void FFMindFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
