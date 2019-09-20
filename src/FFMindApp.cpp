/***************************************************************
 * Name:      FFMindApp.cpp
 * Purpose:   Code for Application Class
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

#include "FFMindApp.h"
#include "FFMindMain.h"

IMPLEMENT_APP(FFMindApp);

bool FFMindApp::OnInit()
{
    FFMindFrame* frame = new FFMindFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
