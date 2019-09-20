#ifndef FFPARSER_H
#define FFPARSER_H
#include "Command.h"

class FFParser
{
    public:
        FFParser();
        virtual ~FFParser();
        void ReadCmdFile(wxString strCmdFile);
        void Analysis();
        void Draw(wxDC& dc);
        void Image();
    protected:
        // analysis command
        void AnalysisMindTree();
        void AnalysisFishBone();
        void AnalysisUML();
        void AnalysFlowChart();
        // layout elements
        void LayoutMindTree();
        void LayoutFishBone();
        void LayoutUML();
        void LayoutFlowChart();
        // draw elements
        void DrawMindTree(wxDC& dc);
        void DrawFishBone(wxDC& dc); //鱼骨图
        void DrawUML(wxDC& dc); //组织架构图
        void DrawFlowChart(wxDC& dc);
    protected:
        wxString m_cmds; // command parsed
        int m_type; //FF Mind Type
};

#endif // FFPARSER_H
