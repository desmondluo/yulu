#pragma once

#include "../stdafx.h"

/**
 * @brief 主窗口.
 */
class MainFrame:
    public WindowImplBase
{
public:
    /**
     * @brief 构造函数.
     */
    MainFrame();
    /**
     * @brief 析构函数.
     */
    ~MainFrame();
    /**
     * @brief 获取皮肤路径.
     * @return 皮肤的路径
     */
    virtual DuiLib::CDuiString GetSkinFolder();
    /**
     * @brief 获取皮肤文件名称.
     * @return 皮肤文件名称
     */
    virtual CDuiString GetSkinFile();
    /**
     * @brief 这个类的名称.
     * @return 类名称
     */
    virtual LPCTSTR GetWindowClassName(void) const;
};

