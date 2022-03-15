#include "person.h"

using namespace std;

person::person(int id, string name)
{
	this->id = id;
	this->name = name;
}

int person::getid()
{
	return this->id;
}

string person::getname()
{
	return this->name;
}