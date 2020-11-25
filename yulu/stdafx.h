#pragma once

// windows
#include <Windows.h>
#include <WinInet.h>
#include <Shellapi.h>
#include <Shlwapi.h>
#include <Shlobj.h>
#include <GdiPlus.h>
#include <commdlg.h>
#include <direct.h>
#include <tchar.h>
#pragma comment( lib,"GdiPlus.lib" )
#pragma comment( lib,"Shell32.lib" )
#pragma comment( lib,"shlwapi.lib" )


// ��׼��
#include <stdio.h>
#include <stdlib.h>

// DUILIB
#include <Duilib/UIlib.h>
using namespace DuiLib;
#pragma comment(lib, "duilib.lib")

//! �����һЩ����ĺ�
enum trace_level
{
    //! �򵥵���־
    LOG_DATA = 1,
    //! ��־
    LOG_LOG = 2, 
    //! ������Ϣ
    LOG_DEBUG = 3,
    //! ��Ҫ��ӡ��������Ϣ
    LOG_TRACE = 4,
    //! ����
    LOG_WARN = 5,
    //! ����
    LOG_ERROR = 6,
    //! ���ش���
    LOG_FATAL = 7
};

/**
 * @brief ��־���
 * @param level ��־����
 * @forat ��ʽ����.
 */
void Trace(trace_level level, const TCHAR* format, ...);
