#pragma once

#include "Item.h"

class Armour : public Item
{
private:

public:
	Armour();
	virtual ~Armour();

	void generateItem();
};