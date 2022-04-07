#include "Monster.h"

Monster::Monster()
{
	this->setStat(new Stats());
}

Monster::~Monster()
{
}

void Monster::generateMonster()
{
	switch (rand() % 5)
	{
	case 0:
		this->getStat()->setName("Bat");
		this->getStat()->setMaxHealth(2);
		this->getStat()->setCurrentHealth(2);
		this->getStat()->setDefence(0);
		this->getStat()->setAttack(1);
		this->setPoints(1);
		break;
	case 1:
		this->getStat()->setName("Scorpion");
		this->getStat()->setMaxHealth(4);
		this->getStat()->setCurrentHealth(4);
		this->getStat()->setDefence(1);
		this->getStat()->setAttack(3);
		this->setPoints(2);
		break;
	case 2:
		this->getStat()->setName("Snake");
		this->getStat()->setMaxHealth(7);
		this->getStat()->setCurrentHealth(7);
		this->getStat()->setDefence(0);
		this->getStat()->setAttack(4);
		this->setPoints(3);
		break;
	case 3:
		this->getStat()->setName("Wolf");
		this->getStat()->setMaxHealth(10);
		this->getStat()->setCurrentHealth(10);
		this->getStat()->setDefence(3);
		this->getStat()->setAttack(6);
		this->setPoints(4);
		break;
	case 4:
		this->getStat()->setName("Golem");
		this->getStat()->setMaxHealth(15);
		this->getStat()->setCurrentHealth(15);
		this->getStat()->setDefence(6);
		this->getStat()->setAttack(1);
		this->setPoints(5);
		break;
	default:
		this->getStat()->setName("Dragon");
		this->getStat()->setMaxHealth(20);
		this->getStat()->setCurrentHealth(20);
		this->getStat()->setDefence(8);
		this->getStat()->setAttack(10);
		this->setPoints(10);
		break;
	}
}

ostream& operator<<(ostream& out, Monster monster)
{
	out << "Monster\n" << *monster.getStat() << endl;
	return out;
}