#include "Consumable.h"

Consumable::Consumable()
{
	this->type = 0;
}


Consumable::~Consumable()
{

}


std::string Consumable::toString()
{
	std::string str =
		+" | Type: "
		+ this->type;
		+" | Heal: "
		+ std::to_string(this->getStat()->getHeal());

	return str;
}



void Consumable::generateConsumable()
{
	switch (rand() % 3)
	{
	case 0:
		this->getStat()->setName("Bread");
		this->getStat()->setHeal(2);
		break;
	case 1:
		this->getStat()->setName("Cheese");
		this->getStat()->setHeal(4);
		break;
	case 2:
		this->getStat()->setName("Whiskey");
		this->getStat()->setHeal(6);
		break;
	default:
		this->getStat()->setName("Milk");
		this->getStat()->setHeal(1);
		break;
	}
}
