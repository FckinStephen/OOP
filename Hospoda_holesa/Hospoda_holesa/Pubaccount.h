#pragma once
#include "Stangast.h"
using namespace std;

class PubAccount
{
private:
    int number;
    Stangast* AddToBalance;
    double balance;

public:
    PubAccount(int n, Stangast* c);
    Stangast* GetAddToBalance();
    int GetNumber();
    double GetBalance();
    bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);
};

