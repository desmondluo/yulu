#include "stdafx.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, TCHAR* lpCmdLine, int nCmdShow)
{
    Trace(LOG_DEBUG, _T("��������\n"));
    CPaintManagerUI::SetInstance(hInstance);
    CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());
    return 0;
}