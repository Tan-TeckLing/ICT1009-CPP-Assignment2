#pragma once

#include "Item.h"

class Weapon :
	public Item
{
private:
	int damageMin;
	int damageMax;
public:
	Weapon(
		int damageMin,
		int damageMax,
		std::string name,
		int level
		);
		virtual ~Weapon();

	virtual Weapon* clone()const override;

	std::string toString();


};