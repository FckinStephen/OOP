#pragma once
#include <iostream>
using namespace std;
//Ciste abstraktni trida slouzici jako "template" pro ostatni
class LivingBeing
{

public:
	LivingBeing();
	virtual void ShowInfo() = 0;
};

