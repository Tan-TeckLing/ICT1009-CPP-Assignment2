#include"Weapon.h"

Weapon::Weapon()
{
	this->type = 0;
}


Weapon::~Weapon()
{

}

Weapon* Weapon::clone()const
{
	return new Weapon(*this);
}

std::string Weapon::toString()
{
	std::string str =
		+" | Type: "
		+ this->type;
		+" | Attack: "
		+ std::to_string(this->stats.getAttack());

	return str;
}

void Weapon::setStats(std::string name, int attack)
{
	this->stats.setName(name);
	this->stats.setAttack(attack);
}

void Weapon::setStat(Stats stats)
{
	this->stats = stats;
}

Stats Weapon::getStat()
{
	return this->stats;
}