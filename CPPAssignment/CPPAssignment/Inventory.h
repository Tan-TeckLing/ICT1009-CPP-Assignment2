#pragma once

#include <iostream>
#include "Weapon.h"
#include "Armour.h"
#include <vector>

using namespace std;

class Inventory
{
private:
	vector<Item*> items;
public:
	Inventory();
	~Inventory();
	void addItem(Item* item);

	void debugPrint()
	{
		int i = 1;
		for (Item* item : this->items)
		{
			std::cout << i << ". " << item->debugPrint() << std::endl;
			i++;
		}
	}
};

