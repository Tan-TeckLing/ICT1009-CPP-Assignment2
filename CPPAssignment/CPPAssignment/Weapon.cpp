#include"Weapon.h"

Weapon::Weapon()
{
	this->type = 0;
}


Weapon::~Weapon()
{

}


std::string Weapon::toString()
{
	std::string str =
		+" | Type: "
		+ this->type;
		+" | Attack: "
		+ std::to_string(this->stats->getAttack());

	return str;
}


void Weapon::generateWeapon()
{
	switch (rand() % 3)
	{
	case 0:
		this->getStat()->setName("Dagger");
		this->getStat()->setAttack(2);
			break;
	case 1:
		this->getStat()->setName("Sword");
		this->getStat()->setAttack(4);
			break;
	case 2:
		this->getStat()->setName("Rapier");
		this->getStat()->setAttack(6);
			break;
	default:
		this->getStat()->setName("Knife");
		this->getStat()->setAttack(1);
			break;
	}
}