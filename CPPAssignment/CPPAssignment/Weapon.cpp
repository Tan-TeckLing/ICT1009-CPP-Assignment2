#include"Weapon.h"

Weapon::Weapon(int damageMin, int damageMax, std::string name, int level)
	:Item(name, level)
{
	this->damageMin = damageMin;
	this->damageMax = damageMax;
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
		+ " | Damage: "
		+ std::to_string(this->damageMin)
		+ " - "
		+ std::to_string(this->damageMax);

	return str;
}