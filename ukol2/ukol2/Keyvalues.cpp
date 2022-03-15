#include "Keyvalues.h"

KeyValue::KeyValue(int k, double v)
{
	this->key = k;
	this->value = v;
}

int KeyValue::GetKey()
{
	return this->key;
}

double KeyValue::GetValue()
{
	return this->value;
}

KeyValues::KeyValues(int n)
{
	this->keyValues = new KeyValue * [n];
	this->count = 0;
}

KeyValues::~KeyValues()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->keyValues[i];
	}
	delete[] this->keyValues;
}

int KeyValues::Count()
{
	return this->count;
}

KeyValue* KeyValues::CreateObject(int k, double v)
{
	KeyValue* newObject = new KeyValue(k, v);

	this->keyValues[this->count] = newObject;
	this->count += 1;

	return newObject;

}

KeyValue* KeyValues::SearchObject(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			return this->keyValues[i];
		}

	}
	return nullptr;

}

KeyValue* KeyValues::RemoveObject(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			KeyValue* back = keyValues[i];
			this->count--;
			keyValues[i] = keyValues[count];
			keyValues[count] = nullptr;
			return back;
		}

	}
	return nullptr;

}