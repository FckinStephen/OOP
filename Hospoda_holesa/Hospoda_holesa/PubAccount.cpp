#include "PubAccount.h"
using namespace std;
#include <iostream>

PubAccount::PubAccount(int n, Stangast* c)
{
	this->number = n;
	this->AddToBalance = c;
	this->balance = 0;
}

Stangast* PubAccount::GetAddToBalance()
{
	return AddToBalance;
}

int PubAccount::GetNumber()
{
	return this->number;
}

double PubAccount::GetBalance()
{
	return this->balance;
}

bool PubAccount::CanWithdraw(double a)
{
	if (this->balance >= a) {
		return true;
	}
	else
	{

		return false;
	}
}

void PubAccount::Deposit(double a)
{
	this->balance += a;
}

bool PubAccount::Withdraw(double a)
{
	if (this->CanWithdraw(a) == true) {
		this->balance -= a;
		return true;

	}
	else {
		return false;
	}
}

