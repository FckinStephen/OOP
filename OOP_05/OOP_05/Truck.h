#pragma once
#include "Vehicle.h"
//Header pro třídu Truck
class Truck : public Vehicle{
private:
	int maxSpeed;
	int maxSpeedwithTrailer;
	double maxTrailerVolumeinLiters;

public:
	Truck(int id, int w, string brand, double price, string trans, int speed, int speedTrailer, double trailerVolume);

	int getMaxSpeed();
	int getMaxSpeedTrailer();
	double getMaxTrailerVolume();


};
