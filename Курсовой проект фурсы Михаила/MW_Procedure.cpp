#include "MainWindow.h"

// Генерація рандомних координат
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

LRESULT MainWindow::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_CREATE:
			SetTimer(m_hwnd, 1, 16, NULL);
			pen_apple = CreateSolidBrush ((COLORREF)RGB(10,10,250));
			pen_snake = CreateSolidBrush((COLORREF)RGB(10, 10, 250));
			return 0;

		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;

		case WM_SIZE:
			GetClientRect(m_hwnd, &rect_client);
			//x_apple = getRandomNumber(20, rect_client.bottom - 20);
			//y_apple = getRandomNumber(20, rect_client.bottom - 20);
			//x_apple_1 = getRandomNumber(20, rect_client.right - 20);
			//x_apple_1 = getRandomNumber(20, rect_client.bottom - 20);
			//x_apple_2 = getRandomNumber(20, rect_client.right - 20);
			//x_apple_2 = getRandomNumber(20, rect_client.bottom - 20);
			//x_apple_3 = getRandomNumber(20, rect_client.right - 20);
			//x_apple_3 = getRandomNumber(20, rect_client.bottom - 20);
		return 0;

		case WM_TIMER:
		{
			if (move_right == true)
			{
				x += speed_x;
			}
			else if (move_left == true)
			{
				x -= speed_x;
			}
			else if (move_up == true)
			{
				y -= speed_y;
			}
			else if (move_down == true)
			{
				y += speed_y;
			}

			if (((x_apple - 20) == x | (x_apple + 20)) == x && ((y_apple - 20) == y || (y_apple + 20) == y))
			{
				x_apple = getRandomNumber(20, rect_client.bottom - 20);
				y_apple = getRandomNumber(20, rect_client.bottom - 20);
				bool_ellipse += 10;
			}
			if (((x_apple_1 - 20) == x | (x_apple_1 + 20)) == x && (y == (y_apple_1 - 20) || y == (y_apple_1 + 20)))
			{
				x_apple_1 = getRandomNumber(20, rect_client.right - 20);
				x_apple_1 = getRandomNumber(20, rect_client.bottom - 20);
				bool_ellipse += 10;
			}
			if ((x == (x_apple_2 - 20) || x == (x_apple_2 + 20)) && (y == (y_apple_2 - 20) || y == (y_apple_2 + 20)))
			{
				x_apple_2 = getRandomNumber(20, rect_client.right - 20);
				x_apple_2 = getRandomNumber(20, rect_client.bottom - 20);
				bool_ellipse += 10;
			}
			if ((x == (x_apple_3 - 20) || x == (x_apple_3 + 20)) && (y == (y_apple_3 - 20) || y == (y_apple_3 + 20)))
			{

				x_apple_3 = getRandomNumber(20, rect_client.right - 20);
				x_apple_3 = getRandomNumber(20, rect_client.bottom - 20);
				bool_ellipse += 10;
			}

			InvalidateRect(m_hwnd, NULL, TRUE);
		}
		return 0;

		case WM_KEYDOWN:
		{
			switch (wParam)
			{
				case VK_LEFT:
					 move_right = false;
					 move_left = true;
					 move_up = false;
					 move_down = false;
				break;

				case VK_RIGHT:
					 move_right = true;
					 move_left = false;
					 move_up = false;
					 move_down = false;
				break;

				case VK_UP:
					 move_right = false;
					 move_left = false;
					 move_up = true;
					 move_down = false;
				break;

				case VK_DOWN:
					 move_right = false;
					 move_left = false;
					 move_up = false;
					move_down = true;
				break;
			}
		}
		return 0;

		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(m_hwnd, &ps);

			FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 12));

			#pragma region draw_snake
			SelectObject(hdc, pen_snake);
			if(30 <= bool_ellipse) Ellipse(hdc, x_old_30 - 10, y_old_30 - 10, x_old_30 + 10, y_old_30 + 10);

			x_old_30 = x_old_29;
			y_old_30 = y_old_29;

			if (29 <= bool_ellipse)Ellipse(hdc, x_old_29 - 10, y_old_29 - 10, x_old_29 + 10, y_old_29 + 10);

			x_old_29 = x_old_28;
			y_old_29 = y_old_28;

			if(28 <= bool_ellipse)Ellipse(hdc, x_old_28 - 10, y_old_28 - 10, x_old_28 + 10, y_old_28 + 10);

			x_old_28 = x_old_27;
			y_old_28 = y_old_27;

			if(27 <= bool_ellipse)Ellipse(hdc, x_old_27 - 10, y_old_27 - 10, x_old_27 + 10, y_old_27 + 10);

			x_old_27 = x_old_26;
			y_old_27 = y_old_26;

			if(26 <= bool_ellipse)Ellipse(hdc, x_old_26 - 10, y_old_26 - 10, x_old_26 + 10, y_old_26 + 10);

			x_old_26 = x_old_25;
			y_old_26 = y_old_25;

			if(25 <= bool_ellipse)Ellipse(hdc, x_old_25 - 10, y_old_25 - 10, x_old_25 + 10, y_old_25 + 10);

			x_old_25 = x_old_24;
			y_old_25 = y_old_24;

			if(24 <= bool_ellipse)Ellipse(hdc, x_old_24 - 10, y_old_24 - 10, x_old_24 + 10, y_old_24 + 10);

			x_old_24 = x_old_23;
			y_old_24 = y_old_23;

			if(23 <= bool_ellipse)Ellipse(hdc, x_old_23 - 10, y_old_23 - 10, x_old_23 + 10, y_old_23 + 10);

			x_old_23 = x_old_22;
			y_old_23 = y_old_22;

			if(22 <= bool_ellipse)Ellipse(hdc, x_old_22 - 10, y_old_22 - 10, x_old_22 + 10, y_old_22 + 10);

			x_old_22 = x_old_21;
			y_old_22 = y_old_21;

			if(21 <= bool_ellipse)Ellipse(hdc, x_old_21 - 10, y_old_21 - 10, x_old_21 + 10, y_old_21 + 10);

			x_old_21 = x_old_20;
			y_old_21 = y_old_20;

			if(20 <= bool_ellipse)Ellipse(hdc, x_old_20 - 10, y_old_20 - 10, x_old_20 + 10, y_old_20 + 10);

			x_old_20 = x_old_19;
			y_old_20 = y_old_19;

			if(19 <= bool_ellipse)Ellipse(hdc, x_old_19 - 10, y_old_19 - 10, x_old_19 + 10, y_old_19 + 10);

			x_old_19 = x_old_18;
			y_old_19 = y_old_18;

			if(18 <= bool_ellipse)Ellipse(hdc, x_old_18 - 10, y_old_18 - 10, x_old_18 + 10, y_old_18 + 10);

			x_old_18 = x_old_17;
			y_old_18 = y_old_17;

			if(17 <= bool_ellipse)Ellipse(hdc, x_old_17 - 10, y_old_17 - 10, x_old_17 + 10, y_old_17 + 10);

			x_old_17 = x_old_16;
			y_old_17 = y_old_16;

			if(16 <= bool_ellipse)Ellipse(hdc, x_old_16 - 10, y_old_16 - 10, x_old_16 + 10, y_old_16 + 10);

			x_old_16 = x_old_15;
			y_old_16 = y_old_15;

			if(15 <= bool_ellipse)Ellipse(hdc, x_old_15 - 10, y_old_15 - 10, x_old_15 + 10, y_old_15 + 10);

			x_old_15 = x_old_14;
			y_old_15 = y_old_14;

			if(14 <= bool_ellipse)Ellipse(hdc, x_old_14 - 10, y_old_14 - 10, x_old_14 + 10, y_old_14 + 10);

			x_old_14 = x_old_13;
			y_old_14 = y_old_13;

			if(13 <= bool_ellipse)Ellipse(hdc, x_old_13 - 10, y_old_13 - 10, x_old_13 + 10, y_old_13 + 10);

			x_old_13 = x_old_12;
			y_old_13 = y_old_12;

			if(12 <= bool_ellipse)Ellipse(hdc, x_old_12 - 10, y_old_12 - 10, x_old_12 + 10, y_old_12 + 10);

			x_old_12 = x_old_11;
			y_old_12 = y_old_11;

			if(11 <= bool_ellipse)Ellipse(hdc, x_old_11 - 10, y_old_11 - 10, x_old_11 + 10, y_old_11 + 10);

			x_old_11 = x_old_10;
			y_old_11 = y_old_10;

			if(10 <= bool_ellipse)Ellipse(hdc, x_old_10 - 10, y_old_10 - 10, x_old_10 + 10, y_old_10 + 10);

			x_old_10 = x_old_9;
			y_old_10 = y_old_9;

			if(9 <= bool_ellipse)Ellipse(hdc, x_old_9 - 10, y_old_9 - 10, x_old_9 + 10, y_old_9 + 10);

			x_old_9 = x_old_8;
			y_old_9 = y_old_8;

			if(8 <= bool_ellipse)Ellipse(hdc, x_old_8 - 10, y_old_8 - 10, x_old_8 + 10, y_old_8 + 10);

			x_old_8 = x_old_7;
			y_old_8 = y_old_7;

			if(7 <= bool_ellipse)Ellipse(hdc, x_old_7 - 10, y_old_7 - 10, x_old_7 + 10, y_old_7 + 10);

			x_old_7 = x_old_6;
			y_old_7 = y_old_6;

			if(6 <= bool_ellipse)Ellipse(hdc, x_old_6 - 10, y_old_6 - 10, x_old_6 + 10, y_old_6 + 10);

			x_old_6 = x_old_5;
			y_old_6 = y_old_5;

			if(5 <= bool_ellipse)Ellipse(hdc, x_old_5 - 10, y_old_5 - 10, x_old_5 + 10, y_old_5 + 10);

			x_old_5 = x_old_4;
			y_old_5 = y_old_4;

			if(4 <= bool_ellipse)Ellipse(hdc, x_old_4 - 10, y_old_4 - 10, x_old_4 + 10, y_old_4 + 10);

			x_old_4 = x_old_3;
			y_old_4 = y_old_3;

			if(3 <= bool_ellipse)Ellipse(hdc, x_old_3 - 10, y_old_3 - 10, x_old_3 + 10, y_old_3 + 10);

			x_old_3 = x_old_2;
			y_old_3 = y_old_2;

			if(2 <= bool_ellipse)Ellipse(hdc, x_old_2 - 10, y_old_2 - 10, x_old_2 + 10, y_old_2 + 10);

			x_old_2 = x_old_1;
			y_old_2 = y_old_1;

			if(1 <= bool_ellipse)Ellipse(hdc, x_old_1 - 10, y_old_1 - 10, x_old_1 + 10, y_old_1 + 10);

			x_old_1 = x;
			y_old_1 = y;

			Ellipse(hdc, x-10, y-10, x+10, y+10);
			DeleteObject(pen_snake);
#pragma endregion
			SelectObject(hdc, CreateSolidBrush((COLORREF)RGB(250, 0, 0)));

			Ellipse(hdc, x_apple - 10, x_apple - 10, x_apple + 10, x_apple + 10);
			Ellipse(hdc, x_apple_1 - 10, x_apple_1 - 10, x_apple_1 + 10, x_apple_1 + 10);
			Ellipse(hdc, x_apple_2 - 10, x_apple_2 - 10, x_apple_2 + 10, x_apple_2 + 10);
			Ellipse(hdc, x_apple_3 - 10, x_apple_3 - 10, x_apple_3 + 10, x_apple_3 + 10);

			DeleteObject(CreateSolidBrush((COLORREF)RGB(250, 0, 0)));

			EndPaint(m_hwnd, &ps);
		}
			return 0;
	}
	return DefWindowProc(m_hwnd, uMsg, wParam, lParam);
}