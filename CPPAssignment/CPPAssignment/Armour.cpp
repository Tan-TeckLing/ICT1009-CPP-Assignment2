#include "Armour.h"


Armour::Armour(int type, int defence, std::string name, int level)
	: Item(name, level)
{
	this->type = type;
	this->defence = defence;
	this->name = name;
	this->level = level;
}

Armour::Armour(int type, int defence, std::string name, int level, )
{
}

Armour::~Armour()
{

}

Armor* Armour::clone()const
{
	return new Armor(*this);
}

std::string Armour::toString()const
{
	std::string str =
		this->getName()
		+ " | Type: "
		+ this->typeStr
		+ " | Lvl: "
		+ std::to_string(this->getLevel())
		+ " | Rarity: "
		+ std::to_string(this->getRarity())
		+ " | Def: "
		+ std::to_string(this->defence);

	return str;
}
