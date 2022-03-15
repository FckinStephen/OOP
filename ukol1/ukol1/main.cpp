#include <iostream>
#include <string>
#include "email.h"
#include "person.h"
#include "document.h"

using namespace std;

int main()
{
	cout << "id  " << "name   " << "   email     " << " document     " << endl;
	person* pr1 = new person(1, "Josef");
	email* em1 = new email("josef@email.ua");
	document* dc1 = new document(1, "paper");
	cout << pr1->getid() << "  " << pr1->getname() << "  " << em1->getAdress() << "  " << dc1->getDocName() << endl;

	person* pr2 = new person(2, "Milan");
	email* em2 = new email("milan@email.pl");
	document* dc2 = new document(2, "paper2");
	cout << pr2->getid() << "  " << pr2->getname() << "  " << em2->getAdress() << "  " << dc2->getDocName() << endl;

	delete pr2;
	delete em2;
	delete dc2;



	return 0;
}