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
	void generateItem();

	Item(std::string name = "NONE");

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
