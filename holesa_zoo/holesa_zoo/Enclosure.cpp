#include "Enclosure.h"

Enclosure::Enclosure(Caretaker caretaker, int size)
{
	this->caretaker = caretaker;
	this->animals = new Animal * [size];
	this->maxAnimalsCount = size;
	this->AnimalsCount = 0;
}

Enclosure::~Enclosure()
{
	delete[] animals;
}

void Enclosure::ShowAnimalsInEnclosure()
{
	for (int i = 0; i < AnimalsCount; i++)
	{
		this->animals[i]->ShowJustName();
	}

}

void Enclosure::AddAnimal(Animal* animal)
{
	if (this->AnimalsCount < this->maxAnimalsCount)
	{
		this->animals[this->AnimalsCount] = animal;
		this->AnimalsCount++;
	}
	else
	{
		cout << "maxed out" << endl;
	}

}

void Enclosure::ShowCaretakerOfEnclosure()
{
	cout << this->caretaker.GetName() << endl;
}

