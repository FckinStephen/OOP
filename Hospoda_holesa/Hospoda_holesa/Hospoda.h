#pragma once
#include "Stangast.h"
#include "PubAccount.h"

using namespace std;

class Hospoda
{
private:
    Stangast** Stangasti;
    int StangastiCount;
    PubAccount** accounts;
    int accountsCount;

public:
    Hospoda(int c, int a);
    ~Hospoda();
    Stangast* GetStangast(int c);
    PubAccount* GetAccount(int n);
    Stangast* CreateStangast(int c, string n);
    PubAccount* CreatePubAccount(int n, Stangast* c);
};
