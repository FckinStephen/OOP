using namespace std;
#include <iostream>
#include "PubAccount.h"
#include "Hospoda.h"
#include "Stangast.h"

int main() {
	Hospoda* Lekarna = new Hospoda(6, 2);
	cout << "Pub Lekarna table debt" << endl;
	cout << "**every debt must be paid!!**" << endl << endl;

	Lekarna->CreateStangast(1, "Zdenda");
	Stangast* firstS = Lekarna->GetStangast(1);
	PubAccount* Stul1 = Lekarna->CreatePubAccount(1, firstS);

	cout << "Stangast ";
	cout << Lekarna->GetStangast(1)->GetName();
	cout << " has debt on Table1 amount: 250" << endl;
	Stul1->Deposit(250);

	Lekarna->CreateStangast(2, "Alfons");
	Stangast* secondS = Lekarna->GetStangast(2);

	cout << "Stangast ";
	cout << Lekarna->GetStangast(2)->GetName();
	cout << " has debt on Table1 amount: 400" << endl;
	Stul1->Deposit(400);

	Lekarna->CreateStangast(3, "Jarda");
	Stangast* thirdS = Lekarna->GetStangast(3);

	cout << "Stangast ";
	cout << Lekarna->GetStangast(3)->GetName();
	cout << " has debt on Table1 amount: 150" << endl << endl;
	Stul1->Deposit(150);

	cout << "Total debt on table1 is: " << Lekarna->GetAccount(1)->GetBalance() << endl << endl;
	
	cout << "Stangast ";
	cout << Lekarna->GetStangast(1)->GetName();
	cout << " paid on Table1 amount: 200" << endl;
	Stul1->Withdraw(200);
	cout << "Stangast ";
	cout << Lekarna->GetStangast(2)->GetName();
	cout << " paid on Table1 amount: 500" << endl;
	Stul1->Withdraw(500);
	cout << "Stangast ";
	cout << Lekarna->GetStangast(3)->GetName();
	cout << " paid on Table1 amount: 100" << endl << endl;
	Stul1->Withdraw(100);
	cout << "Total debt on table1 is: " << Lekarna->GetAccount(1)->GetBalance() << endl << endl;
	return 0;
}