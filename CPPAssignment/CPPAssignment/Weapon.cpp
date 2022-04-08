#include"Weapon.h"

Weapon::Weapon()
{
}


Weapon::~Weapon()
{

}


void Weapon::generateItem()
{
	switch (rand() % 3)
	{
	case 0:
		cout << "You found a Dagger with +2 Attack!" << endl;
		this->getStat().setName("Dagger");
		this->getStat().setAttack(2);
			break;
	case 1:
		cout << "You found a Sword with +4 Attack!" << endl;
		this->getStat().setName("Sword");
		this->getStat().setAttack(4);
			break;
	case 2:
		cout << "You found a Rapier with +6 Attack!" << endl;
		this->getStat().setName("Rapier");
		this->getStat().setAttack(6);
			break;
	default:
		cout << "You found a Knife with +1 Attack!" << endl;
		this->getStat().setName("Knife");
		this->getStat().setAttack(1);
			break;
	}
}