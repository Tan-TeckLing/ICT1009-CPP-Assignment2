#pragma once

#include "Weapon.h"
#include "Armour.h"

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
};

