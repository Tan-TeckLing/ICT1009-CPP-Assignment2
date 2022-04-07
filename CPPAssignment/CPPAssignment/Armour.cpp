#include "Armour.h"

Armour::Armour()
{
	this->type = 0;
}


Armour::~Armour()
{

}

Armour* Armour::clone()const
{
	return new Armour(*this);
}

std::string Armour::toString()
{
	std::string str =
		+" | Type: "
		+ this->type;
		+ " | Def: "
		+ std::to_string(this->stats.getDefence());

	return str;
}

void Armour::setStats(std::string name, int defence)
{
	this->stats.setName(name);
	this->stats.setDefence(defence);
}

void Armour::setStat(Stats stats)
{
	this->stats = stats;
}

Stats Armour::getStat()
{
	return this->stats;
}