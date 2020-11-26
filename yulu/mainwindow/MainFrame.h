#pragma once

#include "../stdafx.h"

/**
 * @brief ������.
 */
class MainFrame:
    public WindowImplBase
{
public:
    /**
     * @brief ���캯��.
     */
    MainFrame();
    /**
     * @brief ��������.
     */
    ~MainFrame();
    /**
     * @brief ��ȡƤ��·��.
     * @return Ƥ����·��
     */
    virtual DuiLib::CDuiString GetSkinFolder();
    /**
     * @brief ��ȡƤ���ļ�����.
     * @return Ƥ���ļ�����
     */
    virtual CDuiString GetSkinFile();
    /**
     * @brief ����������.
     * @return ������
     */
    virtual LPCTSTR GetWindowClassName(void) const;
};

