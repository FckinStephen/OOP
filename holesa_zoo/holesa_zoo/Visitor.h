#pragma once
#include "Person.h"
#include <time.h>
//Trida Visitor reprezentujici navstevniky v zoo, s generaci kodu vstupenky
class Visitor : public Person
{
private:
	int TicketID;
public:
	Visitor();
	Visitor(string name, int age, int height, bool sex);
	void ShowTicket();
};

