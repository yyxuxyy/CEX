#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#define  PI 3.1415926
#define  R 300


int main()
{
	int px = 400;
	int py = 500;
	HWND hwnd =(HWND)0x00030430;

	if (hwnd == NULL)
	{
		printf("cann't find\n");
	}
	else
	{
		int angle = 0;

		int x, y;
		while (1)
		{
			x = px + R * cos(angle);
			y = py + R * sin(angle);
			SetWindowPos(hwnd, NULL, x, y, 500, 500, 1);


			angle++;
			if(angle == 360)
			{
				angle = 0;
			}
		}
		Sleep(100000);
	}
	system("pause");
    return 0;
}