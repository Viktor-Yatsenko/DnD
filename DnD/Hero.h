#pragma once
#include<iostream>
using std::cout;
using std::endl;
class Hero {
private:
	std::string Name;
	int Health;
	int dexterity;
	int Intelligence;
	int charisma;
public:
	Hero() {   //����������� �� ���������

		Name = "Stranger";
		Health = 0;
		dexterity = 0;
		Intelligence = 0;
		charisma = 0;
	}
	Hero(std::string name,int value1, int value2,int value3,int value4)
		:Name(name), Health(value1),dexterity(value2),
		Intelligence(value3),charisma(value4) {}
	 
	void print() {
		cout << "��� - " << Name << endl;
		cout << "����� - " << Health << endl;
		cout << "�������� - " << dexterity << endl;
		cout << "��������� - " << Intelligence<< endl;
		cout << "������� - " << charisma << endl;
	}

};
