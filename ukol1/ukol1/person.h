#pragma once
#include <string>
using namespace std;
class person
{
private:
	int id;
	string name;

public:
	person(int id, string name);
	int getid();
	string getname();


};