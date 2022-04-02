#pragma once

#include "Item.h"

class Inventory
{
private:
	int cap;
	int noOfItems;
	Item **itemArray;
	void expand();
	void initialise(const int from);
public:
	Inventory();
	~Inventory();
	void addItem(const Item& item);
	void removeItem(int index);
};

