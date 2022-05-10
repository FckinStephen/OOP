#pragma once
#include "Person.h"
//Trida Caretaker reprezentujici osetrovatele v zoo, je potomkem tridy Person
class Caretaker : public Person
{
private:
	int ID;
	int salary;
	static int objectsCount;
public:
	Caretaker();
	~Caretaker();
	Caretaker(string name, int age, int height, bool sex, int id, int salary);
	void ShowID();
	void ShowSalary();
	void ChangeSalary(int salary);
};

