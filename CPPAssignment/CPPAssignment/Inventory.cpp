#include "Inventory.h"

Inventory::Inventory()
{

}

Inventory::~Inventory()
{
	
}


void Inventory::addItem(Item* item)
{
	this->items.push_back(item);
}
