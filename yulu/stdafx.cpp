#include "stdafx.h"
#include <stdarg.h>
#include <vadefs.h>

void Trace(trace_level level, const TCHAR* format, ...)
{
    // 暂时先直接使用window的console的输出
#ifdef _DEBUG
    TCHAR log[1024 * 5] = { 0 };
#else
    TCHAR log[1024 * 1] = { 0 };
#endif // _DEBUG

    va_list args;
    va_start(args, format);
    _vsnwprintf_s(log, sizeof(log) - 1, format, args);
    va_end(args);
    // 获取本地时间
    SYSTEMTIME lt;
    GetLocalTime(&lt);
    // 打印到内存
    TCHAR ttime[32] = { 0 };
    swprintf_s(ttime,32, L"%04d-%02d-%02d %02d:%02d:%02d", lt.wYear, lt.wMonth, lt.wDay, lt.wHour, lt.wMinute, lt.wSecond);
    OutputDebugString(ttime);
    switch (level)
    {
    case LOG_DATA:
    {
        OutputDebugString(_T(" [DATA]  "));
        break;
    }
    case LOG_LOG:
    {
        OutputDebugString(_T(" [LOG]  "));
        break;
    }
    case LOG_DEBUG:
    {
        OutputDebugString(_T(" [DEBUG]  "));
        break;
    }
    case LOG_TRACE:
    {
        OutputDebugString(_T(" [TRACE]  "));
        break;
    }
    case LOG_ERROR:
    {
        OutputDebugString(_T(" [ERROR]  "));
        break;
    }
    case LOG_FATAL:
    {
        OutputDebugString(_T(" [FATAL]  "));
        break;
    }
    default:
    {
        OutputDebugString(_T(" [UNKNOW]  "));
        break;
    }
    }
    OutputDebugString(log);
}