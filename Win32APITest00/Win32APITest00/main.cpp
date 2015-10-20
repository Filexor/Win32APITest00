#include <Windows.h>

LRESULT CALLBACK mainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEXW mainWindow = { sizeof(WNDCLASSEXW) , CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW , DefWindowProcW , 0 , 0 , hInstance , LoadIconW(hInstance, IDI_APPLICATION) , LoadCursorW(hInstance, IDC_ARROW) , (HBRUSH)(COLOR_WINDOW + 1) , NULL , L"mainWindow" , NULL };
	ATOM mainWindowClass = RegisterClassExW(&mainWindow);
	HWND hMainWindow = CreateWindowExW(WS_EX_OVERLAPPEDWINDOW, (LPCWSTR)mainWindowClass, L"Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
	ShowWindow(hMainWindow, nCmdShow);
}

LRESULT CALLBACK mainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	return DefWindowProcW(hwnd, uMsg, wParam, lParam);
}