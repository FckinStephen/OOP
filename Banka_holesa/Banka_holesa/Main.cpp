#include "Client.h"
#include "Bank.h"
#include "Account.h"
#include <iostream>

using namespace std;

int main() {
	
	Bank* HugeBank = new Bank(5, 5); //vytvoøení banky o 10 klientech a 10 úètech
	/*Zakládáni úètù*/
	
		HugeBank->CreateClient(1, "Eliska");
		Client* Acli = HugeBank->GetClient(1);
		Account* Aacc = HugeBank->CreateAccount(1, Acli, 1.12);
		Aacc->Deposit(65000);

		HugeBank->CreateClient(2, "Pepik");
		Client* Bcli = HugeBank->GetClient(2);
		Account* Bacc = HugeBank->CreateAccount(2, Bcli, 1.25);
		Bacc->Deposit(1000);

		HugeBank->CreateClient(3, "Stepi");
		Client* Ccli = HugeBank->GetClient(3);
		Account* Cacc = HugeBank->CreateAccount(3, Ccli, 1.35);
		Cacc->Deposit(36000);

		HugeBank->CreateClient(4, "Ondrej");
		Client* Dcli = HugeBank->GetClient(4);
		Account* Dacc = HugeBank->CreateAccount(4, Dcli, 1.10);
		Dacc->Deposit(51520);

		HugeBank->CreateClient(5, "Dominik");
		Client* Ecli = HugeBank->GetClient(5);
		Account* Eacc = HugeBank->CreateAccount(5, Ecli, 1.81);
		Eacc->Deposit(14500);
	
	/*Výpis klientù*/ 
	{
		cout << "\t\t\t" << "HUGE BANK" << endl;
		cout << "CLIENTS" << "\t\t\t" << "INTEREST" << "\t\t" << "BALANCE" << endl;
		for (int i = 1; i < 6; i++)
		{
			cout << i << ". ";
			cout << HugeBank->GetClient(i)->GetName();
			cout << "\t\t";
			cout << HugeBank->GetAccount(i)->GetInterestRate();
			cout << "\t\t\t";
			cout << HugeBank->GetAccount(i)->GetBalance() << endl;
		}
	}
	cout << endl;
	/*VÝBÌRY*/ 
	{
		cout << "\t\t\t" << "WITHDRAWS" << endl;
		cout << "CLIENTS" << "\t\t\t" << "WITHDRAW" << "\t\t" << "BALANCE AFTER" << endl;
		//Výbìr penìz 1. klienta
		Aacc->Withdraw(10000);
		cout << "1. ";
		cout << HugeBank->GetClient(1)->GetName();
		cout << "\t\t";
		cout << "10000";
		cout << "\t\t\t";
		cout << HugeBank->GetAccount(1)->GetBalance() << endl;

		//Výbìr penìz 3. klienta !!NEJDE!!
		Cacc->Withdraw(40000);
		cout << "3. ";
		cout << HugeBank->GetClient(3)->GetName();
		cout << "\t\t";
		cout << "40000";
		cout << "\t\t\t";
		cout << HugeBank->GetAccount(3)->GetBalance() << endl << endl;
	}
	/*VKLADY*/
	{
		cout << "\t\t\t" << "DEPOSITS" << endl;
		cout << "CLIENTS" << "\t\t\t" << "AMOUNT OF DEPOSIT" << "\t" << "BALANCE AFTER" << endl;
		//Vklad penìz 2. klienta
		Bacc->Deposit(25000);
		cout << "2. ";
		cout << HugeBank->GetClient(2)->GetName();
		cout << "\t\t";
		cout << "25000";
		cout << "\t\t\t";
		cout << HugeBank->GetAccount(2)->GetBalance() << endl;

		//Vklad penìz 4. klienta
		Dacc->Deposit(12000);
		cout << "4. ";
		cout << HugeBank->GetClient(4)->GetName();
		cout << "\t\t";
		cout << "12000";
		cout << "\t\t\t";
		cout << HugeBank->GetAccount(4)->GetBalance() << endl;
	}

	HugeBank->AddInterest();
	cout << endl << "\t\t" << "BALANCE AFTER INTEREST" << endl;
	cout << "CLIENTS" << "\t\t\t\t\t\t" << "BALANCE" << endl;
	for (int i = 1; i < 6; i++)
	{
		cout << i << ". ";
		cout << HugeBank->GetClient(i)->GetName();
		cout << "\t\t\t\t\t";
		cout << HugeBank->GetAccount(i)->GetBalance()<<endl;
	}
	return 0;
}
