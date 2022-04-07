#ifndef ITEM_H
#define ITEM_H

#pragma once
#include "Stats.h"
#include "ItemType.h"

class Item
{
public:

	//virtual void generateName() = 0;

	void setItemType(ItemType);
	ItemType getItemType();
	void setStat(Stats);
	Stats getStat();
	void setInformation(string);
	string getInformation();
	virtual Item* clone()const = 0;

	Item(std::string name = "NONE", int level = 0);

	inline std::string debugPrint() const {
		return this->name;
	}

private:
	std::string name;
	int level;
	ItemType itemType;
	Stats stats;
	string information;
};

#endif // !ITEM_H
