#include "Player.h"

Player::Player()
{
	level = 1;
	exp = 0;
	expNext = 
		(50/3)*(pow(level,3) -
		6*pow(level,3) +
		(17*level) - 11);
	xPos = 0;
	yPos = 0;
}

Player::Player(double exp, double expNext, double xPos, double yPos)
{

}

Player::~Player()
{

}

//Functions


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

		this->stats.setMaxHealth(stats.getMaxHealth() + 2);
		this->stats.setCurrentHealth(stats.getMaxHealth());
		this->stats.setAttack(stats.getAttack() + 2);
		this->stats.setDefence(stats.getDefence() + 2);
	}
}

void Player::showStats()
{
	std::cout << "~Player Statistics~" << std::endl;
	std::cout << "Name = " << this->stats.getName() << std::endl;
	std::cout << "Level = " << this->level << std::endl;
	std::cout << "Exp = " << this->exp << std::endl;
	std::cout << "Exp to level up = " << this->expNext << std::endl;
	std::cout << "Health = " << this->stats.getCurrentHealth() << "/" << Stats::getMaxHealth() << std::endl;
	std::cout << "Attack = " << this->stats.getAttack() << std::endl;
	std::cout << "Defence = " << this->stats.getDefence() << std::endl;
	std::cout << std::endl;
}

void Player::classSelect(std::string name, int maxHealth, int attack, int defence)
{
	this->stats.setName(name);
	this->stats.setMaxHealth(maxHealth);
	this->stats.setAttack(attack);
	this->stats.setDefence(defence);
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
