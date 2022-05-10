#include "Caretaker.h"
#include <iostream>
using namespace  std;

int Caretaker::objectsCount = 0;

Caretaker::Caretaker() :Person()
{
	this->ID = 69;
	this->salary = 15000;
	Caretaker::objectsCount += 1;
}

Caretaker::~Caretaker()
{
	Caretaker::objectsCount -= 1;
}


Caretaker::Caretaker(string name, int age, int height, bool sex, int id, int salary) :Person(name, age, height, sex)
{
	this->ID = id;
	this->salary = salary;
}

void Caretaker::ShowID()
{
	cout << "ID: " << this->ID << endl;
}

void Caretaker::ShowSalary()
{
	cout << "Salary: " << this->salary << endl;
}

void Caretaker::ChangeSalary(int salary)
{
	this->salary = salary;
}


