#include "document.h"
using namespace std;

document::document(int id, string name)
{
	this->Docid = id;
	this->name = name;
}

int document::getDocId()
{
	return this->Docid;
}

string document::getDocName()
{
	return this->name;
}