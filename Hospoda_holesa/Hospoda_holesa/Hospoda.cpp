#include "Hospoda.h"
using namespace std;
#include <iostream>


Hospoda::Hospoda(int c, int a)
{
	this->Stangasti = new Stangast * [c];
	this->StangastiCount = 0;

	this->accounts = new PubAccount * [a];
	this->accountsCount = 0;
}

Hospoda::~Hospoda()
{
	for (int i = 0; i < this->StangastiCount; i++)
	{
		delete this->Stangasti[i];
	}
	for (int i = 0; i < this->accountsCount; i++)
	{
		delete this->accounts[i];
	}

	delete[] this->accounts;
	delete[] this->Stangasti;
}

Stangast* Hospoda::GetStangast(int c)
{
	for (int i = 0; i < this->StangastiCount; i++) {
		if (this->Stangasti[i]->GetCode() == c) {
			return this->Stangasti[i];
		}
	}
	return nullptr;
}

PubAccount* Hospoda::GetAccount(int n)
{
	for (int i = 0; i < this->accountsCount; i++) {
		if (this->accounts[i]->GetNumber() == n) {
			return this->accounts[i];
		}
	}
	return nullptr;
}

Stangast* Hospoda::CreateStangast(int c, string n)
{
	Stangast* newC = new Stangast(c, n);
	this->Stangasti[this->StangastiCount] = newC;
	this->StangastiCount++;
	return newC;
}

PubAccount* Hospoda::CreatePubAccount(int n, Stangast* c)
{
	PubAccount* newA = new PubAccount(n, c);
	this->accounts[this->accountsCount] = newA;
	this->accountsCount++;
	return newA;
}
