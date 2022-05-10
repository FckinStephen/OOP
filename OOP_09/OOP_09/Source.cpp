#include <stdio.h>
#include"Product.h"
#include"ProductCatalog.h"
#include"Customer.h"
#include "Phone.h"
#include "Tablet.h"

using namespace std;
int main()
{
	Customer *c = new Customer(1, "Pepa");
		
	

	ProductCatalog *pc = new ProductCatalog(30);
	pc->CreateProduct(1, "PC", 1200, 3, 1000);
	pc->CreateProduct(2, "iPhone", 449, 19, "Blue", 6.1, 64);
	Product *p1 = pc->CreateProduct(4, "MacBook Air", 800, 15, 13.3, 2, "Intel HD graphics 6000", true, 128);
	pc->CreateProduct(11, "Samsung Tab", 300, 15, 6.1, 6300, 128);

	


	cout <<"\n" << p1->getName() << endl;
	pc->showItems();
	p1->canBuy(7);

	return 0;
}