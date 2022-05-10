#pragma once

#include "Person.h"
#include "Visitor.h"
#include "Animal.h"
#include "Caretaker.h"
#include "Enclosure.h"
#include <iostream>

int main()
{

	/*Person x;
	x.ShowInfo();*/
	Visitor visitor("Zdenda", 70, 160, true);
	visitor.ShowInfo();
	visitor.ShowTicket();

	Caretaker Stephen("Stephen", 45, 180, true, 12, 37000);
	Caretaker Claire("Claire", 26, 156, false, 10, 37000);
	Stephen.ShowInfo();
	Stephen.ShowID();
	Stephen.ShowSalary();
	Stephen.ChangeSalary(2);
	Stephen.ShowSalary();

	Animal lion("Lion", 35, 223, "Africa", true, true);
	Animal zebra("Zebra", 40, 150, "Africa", false, false);
	Animal eagle("Eagle", 20, 24, "America", true, true);
	Animal panda("Panda", 15, 90, "Asia", false, false);

	cout << "\n";
	cout << "Animal" << "\t|\t" << "Age" << "\t|\t" << "F/M" << "\t|\t" << "Weight (Kg)" << "\t|\t" << "Type of food" << "\t|\t" << "Origin" << endl;

	lion.ShowInfo();
	zebra.ShowInfo();
	eagle.ShowInfo();
	panda.ShowInfo();

	Enclosure a(Stephen, 2);
	Enclosure b(Claire, 2);
	a.AddAnimal(&lion);
	a.AddAnimal(&eagle);
	b.AddAnimal(&zebra);
	b.AddAnimal(&panda);
	cout << "\n" << "Enclosure A" << endl;
	a.ShowCaretakerOfEnclosure();
	a.ShowAnimalsInEnclosure();
	cout << "\n" << "Enclosure B" << endl;
	b.ShowCaretakerOfEnclosure();
	b.ShowAnimalsInEnclosure();

}

