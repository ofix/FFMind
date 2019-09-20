/***************************************************************
 * Name:      FFMindMain.h
 * Purpose:   Defines Application Frame
 * Author:    Tom Song (981326632@qq.com)
 * Created:   2019-09-20
 * Copyright: Tom Song (http://www.xiaocaihong.com.cn)
 * License:
 **************************************************************/

#ifndef FFMINDMAIN_H
#define FFMINDMAIN_H



#include "FFMindApp.h"


#include "GUIFrame.h"

class FFMindFrame: public GUIFrame
{
    public:
        FFMindFrame(wxFrame *frame);
        ~FFMindFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // FFMINDMAIN_H
