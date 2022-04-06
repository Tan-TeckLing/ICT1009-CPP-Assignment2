#pragma once

#include "Item.h"

class Armour :
	public Item
{
private:
	int type;
	int defence;

public:
	Armour(
		int type = 0,
		int defence = 0,
		std::string name = "NONE",
		int level = 0
	);
	virtual ~Armour();

	//Pure virtual
	virtual Armour* clone()const;

	//Functions
	std::string toString()const;
};