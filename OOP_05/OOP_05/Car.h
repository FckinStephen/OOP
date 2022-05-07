#pragma once
#include "Vehicle.h"
//Header pro třídu Car
class Car : public Vehicle{
private:
	int numOfSeat;
	int maxSpeed;
	string color;

public:
	Car(int id, int w, int seat, int speed, string color, string brand, double price, string trans);

	int getSeats();
	int getMaxspeed();
	string getColor();
};