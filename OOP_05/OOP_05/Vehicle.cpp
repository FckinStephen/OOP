#include "Vehicle.h"


//Konstruktor pro objekt vehicle
Vehicle::Vehicle(int id, int w, string brand, double price, string trans) 
{
	this->id = id;
	this->weight = w;
	this->brand = brand;
	this->price = price;
	this->transmission = trans;
}
//Funkce vracející id
int Vehicle::getID()
{
	return this->id;
}
//Funkce vracejicí váhu vozidla
int Vehicle::getWeight()
{
	return this->weight;
}
//Funkce vracející značku
string Vehicle::getBrand()
{
	return this->brand;
}
//Funkce vracející cenu vozidla
double Vehicle::getPrice()
{
	return this->price;
}

string Vehicle::getTrans()
{
	return this->transmission;
}