#include "Armour.h"


Armour::Armour(int type, int defence, std::string name, int level)
	:Item(name, level)
{
	this->type = type;
	this->defence = defence;
}

Armour::~Armour()
{

}

Armour* Armour::clone()const
{
	return new Armour(*this);
}

std::string Armour::toString()const
{
	std::string str =
		+" | Type: "
		+ this->type;
		+ " | Def: "
		+ std::to_string(this->defence);

	return str;
}
