#pragma once
#include <iostream>
#include <string>
//Header pro třídu Vehicle
using namespace std;
class Vehicle {

private:
	int id;
	int weight;
	string brand;
	double price;
	string transmission;

public:
	Vehicle(int id, int w, string brand, double price, string trans);

	int getID();
	int getWeight();
	string getBrand();
	double getPrice();
	string getTrans();


};
