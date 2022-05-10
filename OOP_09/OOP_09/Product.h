#pragma once
#include <iostream>
#include <string>
#include "AbstractProduct.h"

using namespace std;

class Product : public AbstractProduct {
private:
	int id;
	string name;
	float price;
	int numberOfItems;
	int storageCap;

public:
	Product(int id, string name, float price, int numberOfItems, int StorageCap);
	int getId();
	string getName();
	float getPrice();
	int getNumOfItems();

	bool canBuy(int a);

};
