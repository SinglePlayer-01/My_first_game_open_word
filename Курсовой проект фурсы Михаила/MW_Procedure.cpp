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

		case WM_KEYDOWN:
		{
			switch (wParam)
			{
				case VK_LEFT:
					x -= 10;
				break;

				case VK_RIGHT:
					x += 10;
				break;

				case VK_UP:
					y -= 10;
				break;

				case VK_DOWN:
					y += 10;
				break;
			}
			InvalidateRect(m_hwnd, NULL, TRUE);
		}
		return 0;

		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(m_hwnd, &ps);

			FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 12));

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