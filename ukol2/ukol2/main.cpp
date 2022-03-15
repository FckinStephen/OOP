#include <iostream>
#include "Keyvalues.h"

using namespace std;

int main()
{
	int N = 5;
	KeyValues* myKeyValues = new KeyValues(N);

	KeyValue* myKeyValue = myKeyValues->CreateObject(0, 0.5);

	for (int i = 0; i < N; i++)
	{
		myKeyValues->CreateObject(i, i + 0.5);
		cout << myKeyValues->SearchObject(i)->GetValue() << endl;
		
	}
	cout << endl;
	cout << myKeyValues->SearchObject(3)->GetValue() << endl;
	cout << endl;
	cout << myKeyValues->RemoveObject(2)->GetValue() << endl;
	cout << endl;

	for (int i = 0; i < N; i++)
	{
		if (myKeyValues->SearchObject(i) != nullptr) {
			cout << myKeyValues->SearchObject(i)->GetValue() << endl;
		}
		else {
			cout << endl;
		}
	}
	return 0;



}