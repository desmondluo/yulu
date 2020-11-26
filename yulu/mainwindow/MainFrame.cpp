#include "MainFrame.h"

MainFrame::MainFrame()
{

}

MainFrame::~MainFrame()
{

}

CDuiString MainFrame::GetSkinFolder()
{
    return _T("skins");
}

CDuiString MainFrame::GetSkinFile()
{
    return _T("MainFrame.xml");
}

LPCTSTR MainFrame::GetWindowClassName() const
{
    return _T("MainFrame");
}

