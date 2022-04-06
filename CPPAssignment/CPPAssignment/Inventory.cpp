#include "Inventory.h"

Inventory::Inventory()
{
	this->cap = 10;
	this->noOfItems = 0;
	this->itemArray = new Item * [cap];
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->noOfItems; i++)
	{
		delete this->itemArray[i];
	}
	delete[] itemArray;
}

void Inventory::expand() 
{
	this->cap *= 2;
	Item** tempArray = new Item * [this->cap];

	for (size_t i = 0; i < this->noOfItems; i++)
	{
		tempArray[i] = this->itemArray[i];
	}

	delete[] this->itemArray;

	this->itemArray = tempArray;

	this->initialise(this->noOfItems);
}

void Inventory::initialise(const int from)
{
	for (size_t i = from; i < cap; i++)
		this->itemArray[i] = nullptr;
}

void Inventory::addItem(const Item& item)
{
	if (this->noOfItems >= this->cap)
	{
		expand();
	}
	this->itemArray[this->noOfItems++] = item.clone();
}
