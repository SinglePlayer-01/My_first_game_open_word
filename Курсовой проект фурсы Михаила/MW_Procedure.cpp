#include "MainWindow.h"

LRESULT MainWindow::HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_CREATE:
			SetTimer(m_hwnd, 1, 16, NULL);
			return 0;

		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;

		case WM_SIZE:
			GetClientRect(m_hwnd, &rect_client);
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

			Ellipse(hdc, x_old_30 - 10, y_old_30 - 10, x_old_30 + 10, y_old_30 + 10);

			x_old_30 = x_old_29;
			y_old_30 = y_old_29;

			Ellipse(hdc, x_old_29 - 10, y_old_29 - 10, x_old_29 + 10, y_old_29 + 10);

			x_old_29 = x_old_28;
			y_old_29 = y_old_28;

			Ellipse(hdc, x_old_28 - 10, y_old_28 - 10, x_old_28 + 10, y_old_28 + 10);

			x_old_28 = x_old_27;
			y_old_28 = y_old_27;

			Ellipse(hdc, x_old_27 - 10, y_old_27 - 10, x_old_27 + 10, y_old_27 + 10);

			x_old_27 = x_old_26;
			y_old_27 = y_old_26;

			Ellipse(hdc, x_old_26 - 10, y_old_26 - 10, x_old_26 + 10, y_old_26 + 10);

			x_old_26 = x_old_25;
			y_old_26 = y_old_25;

			Ellipse(hdc, x_old_25 - 10, y_old_25 - 10, x_old_25 + 10, y_old_25 + 10);

			x_old_25 = x_old_24;
			y_old_25 = y_old_24;

			Ellipse(hdc, x_old_24 - 10, y_old_24 - 10, x_old_24 + 10, y_old_24 + 10);

			x_old_24 = x_old_23;
			y_old_24 = y_old_23;

			Ellipse(hdc, x_old_23 - 10, y_old_23 - 10, x_old_23 + 10, y_old_23 + 10);

			x_old_23 = x_old_22;
			y_old_23 = y_old_22;

			Ellipse(hdc, x_old_22 - 10, y_old_22 - 10, x_old_22 + 10, y_old_22 + 10);

			x_old_22 = x_old_21;
			y_old_22 = y_old_21;

			Ellipse(hdc, x_old_21 - 10, y_old_21 - 10, x_old_21 + 10, y_old_21 + 10);

			x_old_21 = x_old_20;
			y_old_21 = y_old_20;

			Ellipse(hdc, x_old_20 - 10, y_old_20 - 10, x_old_20 + 10, y_old_20 + 10);

			x_old_20 = x_old_19;
			y_old_20 = y_old_19;

			Ellipse(hdc, x_old_19 - 10, y_old_19 - 10, x_old_19 + 10, y_old_19 + 10);

			x_old_19 = x_old_18;
			y_old_19 = y_old_18;

			Ellipse(hdc, x_old_18 - 10, y_old_18 - 10, x_old_18 + 10, y_old_18 + 10);

			x_old_18 = x_old_17;
			y_old_18 = y_old_17;

			Ellipse(hdc, x_old_17 - 10, y_old_17 - 10, x_old_17 + 10, y_old_17 + 10);

			x_old_17 = x_old_16;
			y_old_17 = y_old_16;

			Ellipse(hdc, x_old_16 - 10, y_old_16 - 10, x_old_16 + 10, y_old_16 + 10);

			x_old_16 = x_old_15;
			y_old_16 = y_old_15;

			Ellipse(hdc, x_old_15 - 10, y_old_15 - 10, x_old_15 + 10, y_old_15 + 10);

			x_old_15 = x_old_14;
			y_old_15 = y_old_14;

			Ellipse(hdc, x_old_14 - 10, y_old_14 - 10, x_old_14 + 10, y_old_14 + 10);

			x_old_14 = x_old_13;
			y_old_14 = y_old_13;

			Ellipse(hdc, x_old_13 - 10, y_old_13 - 10, x_old_13 + 10, y_old_13 + 10);

			x_old_13 = x_old_12;
			y_old_13 = y_old_12;

			Ellipse(hdc, x_old_12 - 10, y_old_12 - 10, x_old_12 + 10, y_old_12 + 10);

			x_old_12 = x_old_11;
			y_old_12 = y_old_11;

			Ellipse(hdc, x_old_11 - 10, y_old_11 - 10, x_old_11 + 10, y_old_11 + 10);

			x_old_11 = x_old_10;
			y_old_11 = y_old_10;

			Ellipse(hdc, x_old_10 - 10, y_old_10 - 10, x_old_10 + 10, y_old_10 + 10);

			x_old_10 = x_old_9;
			y_old_10 = y_old_9;

			Ellipse(hdc, x_old_9 - 10, y_old_9 - 10, x_old_9 + 10, y_old_9 + 10);

			x_old_9 = x_old_8;
			y_old_9 = y_old_8;

			Ellipse(hdc, x_old_8 - 10, y_old_8 - 10, x_old_8 + 10, y_old_8 + 10);

			x_old_8 = x_old_7;
			y_old_8 = y_old_7;

			Ellipse(hdc, x_old_7 - 10, y_old_7 - 10, x_old_7 + 10, y_old_7 + 10);

			x_old_7 = x_old_6;
			y_old_7 = y_old_6;

			Ellipse(hdc, x_old_6 - 10, y_old_6 - 10, x_old_6 + 10, y_old_6 + 10);

			x_old_6 = x_old_5;
			y_old_6 = y_old_5;

			Ellipse(hdc, x_old_5 - 10, y_old_5 - 10, x_old_5 + 10, y_old_5 + 10);

			x_old_5 = x_old_4;
			y_old_5 = y_old_4;

			Ellipse(hdc, x_old_4 - 10, y_old_4 - 10, x_old_4 + 10, y_old_4 + 10);

			x_old_4 = x_old_3;
			y_old_4 = y_old_3;

			Ellipse(hdc, x_old_3 - 10, y_old_3 - 10, x_old_3 + 10, y_old_3 + 10);

			x_old_3 = x_old_2;
			y_old_3 = y_old_2;

			Ellipse(hdc, x_old_2 - 10, y_old_2 - 10, x_old_2 + 10, y_old_2 + 10);

			x_old_2 = x_old_1;
			y_old_2 = y_old_1;

			Ellipse(hdc, x_old_1 - 10, y_old_1 - 10, x_old_1 + 10, y_old_1 + 10);

			x_old_1 = x;
			y_old_1 = y;

			Ellipse(hdc, x-10, y-10, x+10, y+10);

			EndPaint(m_hwnd, &ps);
		}
			return 0;
	}
	return DefWindowProc(m_hwnd, uMsg, wParam, lParam);
}