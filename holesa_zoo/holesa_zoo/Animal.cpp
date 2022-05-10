#include "Animal.h"

Animal::Animal(string name, int age, int w, string origins, bool sex, bool meat)
{
	this->name = name;
	this->age = age;
	this->carnivores = meat;
	this->origins = origins;
	this->weight = w;
	this->sex = sex;
}

void Animal::ShowInfo()
{
	if (this->sex)
	{
		if (this->carnivores)
		{
			cout << this->name << "\t|\t" << this->age << "\t|\t" << "Male" << "\t|\t" << this->weight << "\t\t|\t" << "Carnivore" << "\t|\t" << this->origins << endl;
		}
		else
		{
			cout << this->name << "\t|\t" << this->age << "\t|\t" << "Male" << "\t|\t" << this->weight << "\t\t|\t" << "Herbivore" << "\t|\t" << this->origins << endl;
		}
	}
	else
	{
		if (this->carnivores)
		{
			cout << this->name << "\t|\t" << this->age << "\t|\t" << "Female" << "\t|\t" << this->weight << "\t\t\|\t" << "Carnivore" << "\t|\t" << this->origins << endl;
		}
		else
		{
			cout << this->name << "\t|\t" << this->age << "\t|\t" << "Female" << "\t|\t" << this->weight << "\t\t|\t" << "Herbivore" << "\t|\t" << this->origins << endl;
		}
	}

}

void Animal::ShowJustName()
{
	cout << this->name << endl;
}







