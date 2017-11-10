﻿#pragma once

#include "afxTodop.h"
#include "HtmlContainer.h"

#include "easylogging++.h"

// Html渲染类，使用litehtml库渲染Html代码
class HtmlProcessor {
public:
    HtmlProcessor(HDC hdcPrinter);
    ~HtmlProcessor();

    void addHtml(std::wstring html, double x, double y, double width, double height);

private:
    HDC m_hdcPrinter; // 打印机上下文
    Graphics *m_pGraphics;
    
    litehtml::context *m_pLiteContext;
    HtmlContainer *m_pHtmlContainer;
};
