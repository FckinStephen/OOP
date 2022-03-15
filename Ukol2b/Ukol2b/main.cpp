#include <iostream>
#include <string.h>
#include "Faktura.h"

using namespace std;

int main()
{
	Faktura* fakt = new Faktura(1, "Marek", "Horni Sucha 120", 4);
	fakt->Addthing(120, "Macka");
	fakt->Addthing(500, "Drogy");
	fakt->Addthing(300, "Pokuta");
	fakt->Addthing(99, "Bozkov");

	cout << "Sum of products: " << fakt->GetSum() << endl;

	return 0;
}