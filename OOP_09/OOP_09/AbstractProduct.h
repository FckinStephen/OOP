#pragma once
#include <iostream>

using namespace std;

class AbstractProduct {
private:

public:
	virtual bool canBuy(int a) = 0;

};
