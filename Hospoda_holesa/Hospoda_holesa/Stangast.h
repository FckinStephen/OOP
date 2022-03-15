#pragma once
#include <string>
using namespace std;

class Stangast
{
private:
	int code;
	string name;

public:
	Stangast(int c, string n);
	int GetCode();
	string GetName();
};

