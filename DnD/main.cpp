#include <iostream>
#include <Windows.h>
#include "MainMenu.h"
#include "Hero.h"
#include "Story.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SetConsoleTitle(L"DnD");
	
	Story s;

	s.PrintMassage("Hello");

	menu();

	return 0;
}