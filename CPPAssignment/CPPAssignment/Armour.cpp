#include "Armour.h"

Armour::Armour()
{
	this->type = 0;
}


Armour::~Armour()
{

}



std::string Armour::toString()
{
	std::string str =
		+" | Type: "
		+ this->type;
		+ " | Def: "
		+ std::to_string(this->getStat()->getDefence());

	return str;
}


void Armour::generateArmour()
{
	switch (rand() % 3)
	{
	case 0:
		this->getStat()->getsetName("Wooden Armour");
		this->getStat()->setDefence(2);
		break;
	case 1:
		this->getStat()->setName("Iron Armour");
		this->getStat()->setDefence(4);
		break;
	case 2:
		this->getStat()->setName("Titanium Armour");
		this->getStat()->setDefence(6);
		break;
	default:
		this->getStat()->setName("Chainmail");
		this->getStat()->setDefence(1);
		break;
	}
}
