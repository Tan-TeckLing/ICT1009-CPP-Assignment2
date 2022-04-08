#pragma once

#include "Item.h"

class Consumable : public Item
{
private:
	int type;
public:
	Consumable();
	virtual ~Consumable();

	//Functions
	std::string toString();

	//Accessors
	inline const int& getType() const { return this->type; }

	void generateConsumable();

};

