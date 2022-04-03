#ifndef ITEM_H
#define ITEM_H

#include "Stats.h"
#include "ItemType.h"

class Item
{
public:

	virtual void generateName() = 0;

	void setItemType(ItemType);
	ItemType getItemType();
	void setStat(Stats);
	Stats getStat();
	void setInformation(string);
	string getInformation();

private:
	ItemType itemType;
	Stats stats;
	string information;
};

#endif // !ITEM_H
