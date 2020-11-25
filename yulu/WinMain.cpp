#include "stdafx.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, TCHAR* lpCmdLine, int nCmdShow)
{
    Trace(LOG_DEBUG, _T("≥Ã–Ú∆Ù∂Ø\n"));
    CPaintManagerUI::SetInstance(hInstance);
    CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());
    return 0;
}