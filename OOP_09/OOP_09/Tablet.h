#pragma once
#include "Product.h"

class Tablet : public Product {
private:
	float screenSize;
	int batteryCapacity;
public:
	Tablet(int id, string name, float price, int numOfItems, float screenSize, int batteryCap, int storageCap);
	float getScreenSize();
	int getBatteryCap();

};
