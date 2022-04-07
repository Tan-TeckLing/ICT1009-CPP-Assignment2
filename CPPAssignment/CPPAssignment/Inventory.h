#pragma once

#include <iostream>
#include "Weapon.h"
#include "Armour.h"

class Inventory
{
private:
	int cap;
	int noOfItems;
	Item **itemArray;
	void expand();
	void initialise(const int from = 0);
public:
	Inventory();
	~Inventory();
	void addItem(const Item& item);

	inline void debugPrint() const
	{
		for (size_t i = 0; i < this->noOfItems; i++)
		{
			std::cout << this->itemArray[i]->debugPrint() << std::endl;
		}
	}
};

