#ifndef WINDOWCLASS_H
#define WINDOWCLASS_H

#include "WindowClass.h"

class WindowClass
{
public:
    WindowClass();
    virtual ~WindowClass();

    void SetWindowsClassName(char);
    char GetWindowsClassName();

private:
    WNDCLASSEX m_wcWndClass;
    const char m_sClassName;
};
#endif // WINDOWCLASS_H
