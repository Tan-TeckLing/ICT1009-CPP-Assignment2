#include "Armour.h"

Armour::Armour()
{
}


Armour::~Armour()
{

}


void Armour::generateItem()
{
	switch (rand() % 3)
	{
	case 0:
		cout << "You found Chainmail Armour that increases defence by 2!" << endl;
		this->getStat().setName("Chainmail Armour");
		this->getStat().setDefence(2);
		break;
	case 1:
		cout << "You found Iron Armour that increases defence by 4!" << endl;
		this->getStat().setName("Iron Armour");
		this->getStat().setDefence(4);
		break;
	case 2:
		cout << "You found Titanium Armour that increases defence by 6!" << endl;
		this->getStat().setName("Titanium Armour");
		this->getStat().setDefence(6);
		break;
	default:
		cout << "You found Wooden Armour that increases defence by 1!" << endl;
		this->getStat().setName("Wooden Armour");
		this->getStat().setDefence(1);
		break;
	}
}
