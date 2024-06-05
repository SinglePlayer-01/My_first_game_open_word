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

	// Обирання напрямку руху
	bool move_right = true;
	bool move_left = false;
	bool move_up = false;
	bool move_down = false;

	// Кількість звеній яких треба намалювати
	int bool_ellipse = 1;

	// Координати голови
	int x = 50;
	int y = 50;

	// Координати хвоста
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

	int x_old_11 = 50;
	int y_old_11 = 50;

	int x_old_12 = 50;
	int y_old_12 = 50;

	int x_old_13 = 50;
	int y_old_13 = 50;

	int x_old_14 = 50;
	int y_old_14 = 50;

	int x_old_15 = 50;
	int y_old_15 = 50;

	int x_old_16 = 50;
	int y_old_16 = 50;

	int x_old_17 = 50;
	int y_old_17 = 50;

	int x_old_18 = 50;
	int y_old_18 = 50;

	int x_old_19 = 50;
	int y_old_19 = 50;

	int x_old_20 = 50;
	int y_old_20 = 50;

	int x_old_21 = 50;
	int y_old_21 = 50;

	int x_old_22 = 50;
	int y_old_22 = 50;

	int x_old_23 = 50;
	int y_old_23 = 50;

	int x_old_24 = 50;
	int y_old_24 = 50;

	int x_old_25 = 50;
	int y_old_25 = 50;

	int x_old_26 = 50;
	int y_old_26 = 50;

	int x_old_27 = 50;
	int y_old_27 = 50;

	int x_old_28 = 50;
	int y_old_28 = 50;

	int x_old_29 = 50;
	int y_old_29 = 50;

	int x_old_30 = 50;
	int y_old_30 = 50;

	int speed_x = 10;
	int speed_y = 10;

public:
	PCWSTR ClassName() const { return L"MainWindow class"; }
	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
};

