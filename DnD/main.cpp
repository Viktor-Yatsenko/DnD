#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include "Hero.h"
#define ESC 27
#define UP 72
#define DOWN 80
#define ENTER 13

void menu();
int levelOne();
int GetIntInRange();



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


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SetConsoleTitle(L"DnD");


	menu();
	_getch();


	return 0;
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

//Главное меню(Новая игра, продолжить, выход)
//Новая игра()
//Игроку предлагается выбрать класс из предложенных.
//При выборе класа игроку показывает начальние характеристики героя,
//и даётся выбор, начать играть за данный класс или вернуться к просмотру других героев.

//Игра началась(герой выбран)
//Игрок должен дать имя своему герою
//Переключение начинается.


void EnterMenu(int x, int y, std::string Menu, int activeMenu)
{
	system("CLS");
	GoToXY(x, y);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	std::cout << "Пользователь выбрал \"" << Menu[activeMenu] << "\"";
	_getch();
	system("CLS");
}

void menu()
{
	ConsoleCursorVisible(false, 100);

	std::string Menu[] = { "Начать игру", "Загрузить", "Настройки", "Выход" };
	int activeMenu = 0;
	int x = 50, y = 12;
	GoToXY(x, y);

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
			if(activeMenu > 0)
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
				EnterMenu(int (x), int (y), int (activeMenu) );
				break;
			case 1:

			case 2:

				break;
			case 3:
				exit(0);
			}
			break;
		default:
			std::cout << "Код " << (int)ch << endl;
		}
	}
}


int levelOne()
{
	std::cout << "dasd0" << std::endl;

	int optionsRoom1 = GetIntInRange();

	return 0;
}



	

