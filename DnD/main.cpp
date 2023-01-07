#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Hero.h"


void menu();
void levelOne();

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


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
			levelOne();
		if (choice == 2)
			exit(1);
}

	
void levelOne() {
	
	std::cout << "\"-׸��, ��� ���� ����.\" ����� ����� � ������� � ������ ����������, � ��� ������ ��� ����� ���� ������ ��� �����������. \"-������� � ����� ��������! ���� �����-�� ���������� � ������� ������ � ����� ���� �� ����� � ������� ����� ������� � ����� ��������� ���������!!!!\" ����� ����� ����� �����������. �� ���� ������������, ������ ������ ����� ��������� ���� �� ���� ����." << std::endl;

	std::cout << "����� ���� ������� � ����� ��������� ����� �� ������ ��� � �������� ������ ���. ����� ����� ����� ������� ����� ����� � �����. (1)������ �������� � ������� ������ � ����� ���� �� ����� ��� (2)���� ���������� � �������?" << std::endl;
	int choice;
	std::cin >> choice;


	if (choice == 1) {
		std::cout << "���� ������ � ������� ������ �� �� ��� ���� �� ����� ����� ���� ������� �������� ���. \"�� �� �����!!! � �� ���� �������� ���� � �������\" ���� ����� ������ �� ���� � �������� � �������, ��� ��� ��� ��������� � ������� � ������� ����� �� ����.\n\n �� ���������!" << std::endl;
	}
	if (choice == 2) {
		std::cout << "����� ���� ����� � ������� ������. ������ ����� �� ����� � ������� ������. � ������� ���� ����� ���� � ������� ���������. �� � ���� ������� ����. �� ���� ���� � �������� � �������. ������ ���� ����� ��������� ������� � ���������� ������� ���� ���������� ������� ���� �� ��� ����� ������ �������. \" ������� ����� �������!!!\" ��� ������� ����? (1)�������� ������ �� ��� ������� � ������ �������? ��� ��. (2)�������� ���� ������� � ������� ������ ����� � � ����� ����������� ��� �� �� ������ ��� \" ������� ���\"" << std::endl;

		if (choice == 1) {
			std::cout << "������� ��� ������ ������ ������ � ������� ��������� ����. ��� ����� ���� �� ���� � ��������� ��� � �������. \n\n �� ���������!" << std::endl;
		};
		if (choice == 2) {
			std::cout << "����� ���� ������� ������� � ����� ������ �����. �� ��� ��� ��� ��� ������ � ������ ����� ������ �� �������. �� ���� ����, �������� �� ���� ���� \"������� �������\" \n\n �� ��������!" << std::endl;
		}
	}

}




	

