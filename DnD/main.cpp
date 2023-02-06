#include <iostream>
#include <Windows.h>
#include "MainMenu.h"
#include "Hero.h"
#include "RandNumber.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SetConsoleTitle(L"DnD");
	
	
	std::cout << getRandomNumberCube(1, 6);

	menu();
	


	return 0;
}