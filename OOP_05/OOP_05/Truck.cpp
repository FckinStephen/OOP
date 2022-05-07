#include "Truck.h"
//Konstruktor pro objekt Truck
Truck::Truck(int id, int w, string brand, double price, string trans, int speed, int speedTrailer, double trailerVolume) : Vehicle(id, w, brand, price, trans)
{
	this->maxSpeed = speed;
	this->maxSpeedwithTrailer = speedTrailer;
	this->maxTrailerVolumeinLiters = trailerVolume;
}
//Funkce vracející max rychlost kamionu
int Truck::getMaxSpeed()
{
	return this->maxSpeed;
}
//Funkce vracející max rychlost kamionu s návěsem
int Truck::getMaxSpeedTrailer()
{
	return this->maxSpeedwithTrailer;
}
//Funkce vracejicí maximalní objem návěsu
double Truck::getMaxTrailerVolume()
{
	return this->maxTrailerVolumeinLiters;
}