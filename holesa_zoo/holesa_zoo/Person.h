#pragma once
#include "LivingBeing.h"
//Trida Person reprezentujici osoby ve svete se zakladnimi informacemi, vytvorena jako rodic pro ostatni potomky
class Person : public LivingBeing
{
private:
	string name;
	int age;
	int height; //cm
	bool sex; //true male, false others

public:
	Person();
	Person(string name, int age, int height, bool sex);
	string GetName();
	void ShowInfo();
};

