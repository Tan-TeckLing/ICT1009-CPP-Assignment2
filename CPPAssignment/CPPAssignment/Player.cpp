#include "Player.h"

Player::Player()
{
	level = 1;
	exp = 0;
}

//Player::Player(std::string name, int maxHealth, int attack, int defence)
//{
//	this->name = name;
//	this->maxHealth = maxHealth;
//	this->attack = attack;
//	this->defence = defence;
//	initialise(name);
//}

Player::~Player()
{

}

//Functions

//void Player::initialise(std::string name)
//{
//	this->name = name;
//	this->level = level;
//	this->exp = 0;
//	this->expNext = 
//		(50/3)*(pow(level,3) -
//		6*pow(level,3) +
//		(17*level) - 11);
//	this->maxHealth = maxHealth;
//	this->health = this->maxHealth;
//	this->attack = attack;
//	this->defence = defence;
//}


void Player::levelUp()
{
	while (exp >= expNext)
	{
		this->exp -= this->expNext;
		this->level++;
		this->expNext =
			(50 / 3) * (pow(level, 3) -
			6 * pow(level, 3) +
			(17 * level) - 11);

		Stats::setMaxHealth(stats.getMaxHealth() + 2);
		Stats::setCurrentHealth(stats.getMaxHealth());
		Stats::setAttack(stats.getAttack() + 2);
		Stats::setDefence(stats.getDefence() + 2);
	}
}

void Player::showStats()
{
	std::cout << "~Player Statistics~" << std::endl;
	std::cout << "Name = " << Stats::getName() << std::endl;
	std::cout << "Level = " << this->level << std::endl;
	std::cout << "Exp = " << this->exp << std::endl;
	std::cout << "Exp to level up = " << this->expNext << std::endl;
	std::cout << "Health = " << Stats::getCurrentHealth() << "/" << Stats::getMaxHealth() << std::endl;
	std::cout << "Attack = " << Stats::getAttack() << std::endl;
	std::cout << "Defence = " << Stats::getDefence() << std::endl;
	std::cout << std::endl;
}

void Player::classSelect(std::string name, int maxHealth, int attack, int defence)
{
	Stats::setName(name);
	Stats::setMaxHealth(maxHealth);
	Stats::setAttack(attack);
	Stats::setDefence(defence);
}
void Player::setStat(Stats stats)
{
	this->stats = stats;
}

Stats Player::getStat()
{
	return this->stats;
}

void Player::setEntity(Entity entity)
{
	this->entity = entity;
}

Entity Player::getEntity()
{
	return this->entity;
}
