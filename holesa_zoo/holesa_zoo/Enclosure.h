#pragma once
#include "Animal.h"
#include "Caretaker.h"
//Trida Enclosure reprezentujici vybehy a ohrady v zoo
class Enclosure
{
private:

	Caretaker caretaker; // osoba, ktera ma vybeh na starost
	Animal** animals; // pole zvirat
	int AnimalsCount;
	int maxAnimalsCount;

public:
	Enclosure(Caretaker caretaker, int size);
	~Enclosure();
	void ShowAnimalsInEnclosure();
	void AddAnimal(Animal* animal); 
	void ShowCaretakerOfEnclosure();

};

