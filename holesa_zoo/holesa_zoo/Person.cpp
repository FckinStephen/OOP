#include "Person.h"

Person::Person()
{
	this->name = "Pepa";
	this->age = 40;
	this->height = 189;
	this->sex = true;
}

Person::Person(string name, int age, int height, bool sex)
{
	this->age = age;
	this->name = name;
	this->height = height;
	this->sex = sex;
}

string Person::GetName()
{
	return string(this->name);
}

void Person::ShowInfo()
{
	if (this->sex)
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << "yo male with " << this->height << "cm height" << endl;
	}
	else
	{
		cout << "Hello, my name is " << this->name << " and I am " << this->age << "yo female with " << this->height << "cm height" << endl;
	}
}