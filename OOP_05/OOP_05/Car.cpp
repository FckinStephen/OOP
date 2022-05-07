#include "Car.h"
//Konstruktor pro objekt Car s použítím dědičnosti třídy Vehicle
Car::Car(int id, int w, int seat, int speed, string color, string brand, double price, string trans) : Vehicle(id, w, brand, price, trans)
{
	this->numOfSeat = seat;
	this->maxSpeed = speed;
	this->color = color;
}
//Funkce vracející počet sedadel
int Car::getSeats()
{
	return this->numOfSeat;
}
//Funkce vracejicí max rychlost
int Car::getMaxspeed()
{
	return this->maxSpeed;
}
//Funkce vracejicí barvu
string Car::getColor()
{
	return this->color;
}