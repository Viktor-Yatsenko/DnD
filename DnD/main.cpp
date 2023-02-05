#include <iostream>
#include <Windows.h>
#include "MainMenu.h"
#include "Hero.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SetConsoleTitle(L"DnD");

	menu();
	


	return 0;
}