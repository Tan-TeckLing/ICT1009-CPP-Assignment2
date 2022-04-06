#include "Item.h"


Item::Item(std::string name, int level)
{
	this->name = name;
	this->level = level;
}

void Item::setItemType(ItemType itemType)
{
	this->itemType = itemType;
}

ItemType Item::getItemType()
{
	return this->itemType;
}

void Item::setStat(Stats stats)
{
	this->stats = stats;
}

Stats Item::getStat()
{
	return this->stats;
}

void Item::setInformation(string information)
{
	this->information = information;
}

string Item::getInformation()
{
	return this->information;
}