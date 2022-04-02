
#ifndef ITEM_H
#define ITEM_H

#include "Stats.h"

class Item
{
public:

	virtual void generateName() = 0;

	void setStat(Stats);
	Stats getStat();
	void setInformation(string);
	string getInformation();

private:
	Stats stats;
	string information;
};

#endif // !ITEM_H
