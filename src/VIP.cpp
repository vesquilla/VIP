#include "VIP.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdShow)
{
    MessageBox(NULL, "Hello World!", "Note", MB_OK);
    return 0;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        case WM_CLOSE:
            DestroyWindow(hwnd);
            break;
        case WM_DESTROY:
            PostQuitMessage();
            break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }

    return 0;

}

