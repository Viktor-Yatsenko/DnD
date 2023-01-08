#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Hero.h"


void menu();
int levelOne();

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	menu();
}

int GetIntInRange() {

	while (true) {

		std::cout << "Выберите действие: ";
		int input;
		std::cin >> input;

		//Проверка на извлечение
		if (std::cin.fail() || input < 0 || input > 9) {

			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
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

void menu() {
		std::cout << "1 Начать игру.   2 Выход." << std::endl;
		int choice;
		std::cin >> choice;
		if (choice == 1)
			levelOne();
		if (choice == 2)
			exit(1);
}


int levelOne() {

	int optionsRoom1 = GetIntInRange();

	return 0;
}



	

