#include<stdio.h>
#include<Windows.h>
#include"using_cmd.h"

int main() {
	input_cmd("explorer http://google.com");

	HWND hWndConsole = GetConsoleWindow();
	ShowWindow(hWndConsole, SW_HIDE);
	return 0;
}