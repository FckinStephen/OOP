#pragma once

#include "Product.h"

class Phone : public Product {
private:
	string color;
	float screenSize;
	int storageCap;
public:
		Phone(int id, string name, float price, int numOfItems, string color, float screenSize, int storageCap);
		string getColor();
		float getScreenSize();
};
