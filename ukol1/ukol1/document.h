#pragma once
#include <string>
using namespace std;

class document
{
private:
	int Docid;
	string name;
public:
	document(int Docid, string name);
	int getDocId();
	string getDocName();
};
