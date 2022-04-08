#pragma once

#include "Item.h"

class Weapon : public Item
{
private:
	int type;
public:
	Weapon();
		virtual ~Weapon();

	//Functions
	std::string toString();

	//Accessors
	inline const int& getType() const { return this->type; }

	void generateWeapon();


};