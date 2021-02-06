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


// 标准库
#include <stdio.h>
#include <stdlib.h>

// DUILIB
#include <Duilib/UIlib.h>
using namespace DuiLib;
#ifdef _DEBUG
#pragma comment(lib, "duilib_d.lib")
#else
#pragma comment(lib, "duilib.lib")
#endif // DEBUG



//! 定义的一些输出的宏
enum trace_level
{
    //! 简单的日志
    LOG_DATA = 1,
    //! 日志
    LOG_LOG = 2, 
    //! 调试信息
    LOG_DEBUG = 3,
    //! 需要打印出来的信息
    LOG_TRACE = 4,
    //! 警告
    LOG_WARN = 5,
    //! 错误
    LOG_ERROR = 6,
    //! 严重错误
    LOG_FATAL = 7
};

/**
 * @brief 日志输出
 * @param level 日志级别
 * @forat 格式数据.
 */
void Trace(trace_level level, const TCHAR* format, ...);
