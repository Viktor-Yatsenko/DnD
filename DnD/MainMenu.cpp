#include "MainMenu.h"


HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}

void ConsoleCursorVisible(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show; // изменяем видимость курсора
	structCursorInfo.dwSize = size;   // изменяем размер курсора
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}


int GetIntInRange()
{
	while (true)
	{
		std::cout << "Выберите действие: ";
		int input;
		std::cin >> input;

		//Проверка на извлечение
		if (std::cin.fail() || input < 0 || input > 9)
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return input;
		}
	}
}

class EnterMenu
{
private:
	std::string Menu;
	int x = 50;
	int y = 12;
	int activeMenu = 0;
	char ch = 0;

public:
	void Enter()
	{
		system("CLS");
		GoToXY(x, y);
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		std::cout << "Пользователь выбрал \"" << Menu[activeMenu] << "\"";
		ch = _getch();
		system("CLS");
	}
};


void menu()
{
	EnterMenu EnterMenu;
	ConsoleCursorVisible(false, 100);
	std::string Menu[] = { "Начать игру", "Загрузить", "Настройки", "Выход" };
	int activeMenu = 0;


	char ch;
	while (true)
	{
		int x = 50, y = 12;
		GoToXY(x, y);

		for (int i = 0; i < size(Menu); i++)
		{
			if (i == activeMenu)
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			else
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

			GoToXY(x, y++);
			std::cout << Menu[i] << std::endl;
		}

		ch = _getch();
		if (ch == -32)
			ch = _getch();
		switch (ch)
		{
		case ESC:
			exit(0);
		case UP:
			if (activeMenu > 0)
				--activeMenu;
			break;
		case DOWN:
			if (activeMenu < size(Menu) - 1)
				++activeMenu;
			break;
		case ENTER:
			switch (activeMenu)
			{
			case 0:
				EnterMenu.Enter();
				break;
			case 1:
				EnterMenu.Enter();
				break;
			case 2:
				EnterMenu.Enter();
				break;
			case 3:
				exit(0);
			}
		}
	}
}