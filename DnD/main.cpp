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

		std::cout << "�������� ��������: ";
		int input;
		std::cin >> input;

		//�������� �� ����������
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
			levelOne();
		if (choice == 2)
			exit(1);
}


int levelOne() {

	int optionsRoom1 = GetIntInRange();

	return 0;
}



	

