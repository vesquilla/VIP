#include "WindowClass.h"

WindowClass::WindowClass()
{
    //Constructor
    InitializeWindowClass();

    //Set properties defined in the xml
    //SetWindowsProperties();
}

WindowClass::~WindowClass()
{
    //Destructor
}

void WindowClass::InitializeWindowClass()
{

}


//Accessors methods
void WindowClass::SetWindowsClassName(char sClassName)
{
    m_sClassName = sClassName;
}

char WindowClass::GetWindowsClassName()
{
    return m_sClassName;
}
