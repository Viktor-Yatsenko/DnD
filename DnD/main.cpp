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


//������� ����(����� ����, ����������, �����)

//����� ����()
//������ ������������ ������� ����� �� ������������.
//��� ������ ����� ������ ���������� ��������� �������������� �����,
//� ����� �����, ������ ������ �� ������ ����� ��� ��������� � ��������� ������ ������.

//���� ��������(����� ������)
//����� ������ ���� ��� ������ �����
//������������ ����������.

void menu() {
		std::cout << "1 ������ ����.   2 �����." << std::endl;
		int choice;
		std::cin >> choice;
		if (choice == 1)
			heroChoice();
		if (choice == 2)
			exit(1);
}

void heroChoice() {


	while (true) {
		std::cout << "�������� ����� �����\n1-������\n2-�������\n3-����\n4-�������\n5-���\n6-�������\n7-���������\n8-��������\n9-������\n10-�����"<< std::endl;

		int enterHero;
		std::cin >> enterHero;
		/*
		switch (enterHero) {
		// ������
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




	

