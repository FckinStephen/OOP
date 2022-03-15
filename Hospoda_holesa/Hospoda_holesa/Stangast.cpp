#include "Stangast.h"

Stangast::Stangast(int c, string n)
{
	this->code = c;
	this->name = n;

}

int Stangast::GetCode()
{
	return this->code;
}

string Stangast::GetName()
{
	return this->name;
}

