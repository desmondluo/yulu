#include "stdafx.h"
#include "mainwindow/MainFrame.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, TCHAR* lpCmdLine, int nCmdShow)
{
    Trace(LOG_DEBUG, _T("≥Ã–Ú∆Ù∂Ø\n"));
    CPaintManagerUI::SetInstance(hInstance);
    MainFrame frame;
    frame.Create(nullptr, _T("”Ô¬º"), WS_OVERLAPPEDWINDOW, WS_EX_WINDOWEDGE);
    SetClassLong(frame.GetHWND(), GCL_STYLE, GetClassLong(frame.GetHWND(), GCL_STYLE) | CS_DROPSHADOW);
    frame.CenterWindow();
    frame.ShowModal();
    return 0;
}