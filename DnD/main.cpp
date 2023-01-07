#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Hero.h"


void menu();
void heroChoice();

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Hero x;

	std::cout << x.m_test << std::endl;
	

	menu();
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
			heroChoice();
		if (choice == 2)
			exit(1);
}

void heroChoice() {


	while (true) {
		std::cout << "Выберите класс героя\n1-Рыцарь\n2-Наемник\n3-Воин\n4-Геральд\n5-Вор\n6-Ассасин\n7-Волшебник\n8-Пиромант\n9-Клирик\n10-Нищий"<< std::endl;

		int enterHero;
		std::cin >> enterHero;
		/*
		switch (enterHero) {
		// рыцарь
		case 1:

			enum class CharacteristicsOne
			{
				int level = 7;
				int vigor = 12;
				int attunement = 10;
				int endurance = 11;
				int vitality = 15;
				int strength = 13;
				int dexterity = 12;
				int inteligence = 9;
				int faith = 9;
				int luck = 7;
			};
			CharacteristicsOne characteristicsOne = CharacteristicsOne::vigor;
			std::cout << characteristicsOne 

			//
			struct characteristicsOne
			{
				int level = 7;
				int vigor = 12;
				int attunement = 10;
				int endurance = 11;
				int vitality = 15;
				int strength = 13;
				int dexterity = 12;
				int inteligence = 9;
				int faith = 9;
				int luck = 7;
			};

			*/





			break;
		}

		/*
		if (enterHero == 1) {

			struct Warrior
			{
			int force = 15;
				int 
			};
			Warrior warrior;

			std::cout << warrior << std::endl;
		
		
		break;
		}
			*/
	//TEST
}




	

