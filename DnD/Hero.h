#pragma once
#include<iostream>
class Hero {
private:
	std::string Name;
	int Health;
	int dexterity;
	int Intelligence;
	int charisma;
public:
	Hero() {   //Конструктор по умолчанию

		Name = "Stranger";
		dexterity = 0;
		Intelligence = 0;
		charisma = 0;
	}
	Hero(std::string name,int value1, int value2,int value3): // Заполнение характеристик 
		Name(name),dexterity(value1),
		Intelligence(value2),charisma(value3) {}
	

};
