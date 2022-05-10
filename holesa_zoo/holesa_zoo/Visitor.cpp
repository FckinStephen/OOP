#include "Visitor.h"

Visitor::Visitor() :Person()
{
	this->TicketID = 69;
}

Visitor::Visitor(string name, int age, int height, bool sex) : Person(name, age, height, sex)
{
	srand(time(NULL));

	this->TicketID = rand() % 100 + 1;

}

void Visitor::ShowTicket()
{
	cout << "Ticket number: " << this->TicketID << endl;
}


