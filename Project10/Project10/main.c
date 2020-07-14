#include<stdio.h>
#include<Windows.h>

int main() {
	HWND hWndConsole = GetConsoleWindow();
	ShowWindow(hWndConsole, SW_HIDE);

    RegisterHotKey(NULL, 1, MOD_CONTROL | MOD_ALT | MOD_NOREPEAT, 'B');
    RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_ALT | MOD_NOREPEAT, 'E');

    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0) != 0)
    {
        if (msg.message == WM_HOTKEY)
        {
            if (msg.wParam == 1) {

                ShowWindow(hWndConsole, SW_NORMAL);
                printf("opened");
                Sleep(500);
                system("start /max iexplore.exe http://www.ebsi.co.kr");
                Sleep(500);
                ShowWindow(hWndConsole, SW_HIDE);

            }
            else if (msg.wParam == 2) {

                exit(0);

            }
        }
    }

	return 0;
}