#include "email.h"
#include <string>
using namespace std;

email::email(string adr)
{
	this->adress = adr;
}

string email::getAdress()
{
	return this->adress;
}

