#include "Consumable.h"

Consumable::Consumable()
{
}


Consumable::~Consumable()
{

}


void Consumable::generateItem()
{
	switch (rand() % 3)
	{
	case 0:
		cout << "You found Bread that heals for 2 health!" << endl;
		this->getStat().setName("Bread");
		this->getStat().setHeal(2);
		break;		   
	case 1:			 
		cout << "You found Cheese that heals for 4 health!" << endl;
		this->getStat().setName("Cheese");
		this->getStat().setHeal(4);
		break;		   
	case 2:			
		cout << "You found Whiskey that heals for 6 health!" << endl;
		this->getStat().setName("Whiskey");
		this->getStat().setHeal(6);
		break;		   
	default:		
		cout << "You found Milk that heals for 1 health!" << endl;
		this->getStat().setName("Milk");
		this->getStat().setHeal(1);
		break;
	}
}
