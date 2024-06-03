#pragma once

#include<windows.h>
#include<d2d1.h>
#include<dwrite.h>

#pragma comment(lib,"d2d1")
#pragma comment(lib,"dwrite")

#include"BaseWindow.h"



class MainWindow : public BaseWindow<MainWindow>
{
	RECT rect_client;


	int x = 50;
	int y = 50;

	int x_old_1 = 50;
	int y_old_1 = 50;

	int x_old_2 = 50;
	int y_old_2 = 50;

	int x_old_3 = 50;
	int y_old_3 = 50;

	int x_old_4 = 50;
	int y_old_4 = 50;

	int x_old_5 = 50;
	int y_old_5 = 50;

	int x_old_6 = 50;
	int y_old_6 = 50;

	int x_old_7 = 50;
	int y_old_7 = 50;

	int x_old_8 = 50;
	int y_old_8 = 50;

	int x_old_9 = 50;
	int y_old_9 = 50;

	int x_old_10 = 50;
	int y_old_10 = 50;

	int speed_x = 5;
	int speed_y = 5;

public:
	PCWSTR ClassName() const { return L"MainWindow class"; }
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

