#pragma once

#include "Item.h"

class Armour : public Item
{
private:

public:
	Armour();
	virtual ~Armour();

	virtual void generateItem();
};