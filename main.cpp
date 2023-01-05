#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

#define PI 3.14

int main()
{
	HWND myConsole = GetConsoleWindow();

	HDC mdc = GetDC(myConsole);

	int pixel = 0;

	COLORREF COLOR = RGB(r, g, b); 

	for (double i = 0; i < PI * 4; i += 0.05)
	{
		SetPixel(mdc, pixel, (int)(50 + 25 * cos(i)), COLOR);
		pixel += 6;
	}
	ReleaseDC(myConsole, mdc);
	cin.ignore();
	return 0;
}
