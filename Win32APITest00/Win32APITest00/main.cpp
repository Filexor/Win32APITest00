#include <Windows.h>

LRESULT CALLBACK mainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int CALLBACK wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEXW mainWindow = { sizeof(WNDCLASSEXW) , CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW , DefWindowProcW , 0 , 0 , hInstance , LoadIconW(hInstance, IDI_APPLICATION) , LoadCursorW(hInstance, IDC_ARROW) , (HBRUSH)(COLOR_WINDOW + 1) , NULL , L"mainWindow" , NULL };
	ATOM mainWindowClass = RegisterClassExW(&mainWindow);
	HWND hMainWindow = CreateWindowExW(WS_EX_OVERLAPPEDWINDOW, (LPCWSTR)mainWindowClass, L"Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
	ShowWindow(hMainWindow, nCmdShow);
	HWND hButton = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 0, 0, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton2 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTOCHECKBOX, 0, 24, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton3 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTO3STATE, 0, 24 * 2, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton4 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 0, 24 * 3, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton5 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | WS_GROUP | BS_AUTORADIOBUTTON, 0, 24 * 4, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton6 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 0, 24 * 5, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton7 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 0, 24 * 6, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton8 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | WS_GROUP | BS_AUTORADIOBUTTON, 0, 24 * 7, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton9 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 0, 24 * 8, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton10 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 0, 24 * 9, 96, 24, hMainWindow, NULL, hInstance, NULL);
	HWND hButton11 = CreateWindowExW(0, L"BUTTON", L"Button", WS_CHILD | WS_VISIBLE | BS_PUSHBOX, 0, 24 * 10, 96, 24, hMainWindow, NULL, hInstance, NULL);
	MSG msg;
	BOOL bRet;
	while ((bRet = GetMessageW(&msg, hMainWindow, 0, 0)) != 0)
	{
		if (bRet == -1)
		{
			break;
		}
		else
		{
			DispatchMessageW(&msg);
		}
	}
	return msg.wParam;
}

LRESULT CALLBACK mainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProcW(hwnd, uMsg, wParam, lParam);
}