#include "Player.h"

Player::Player()
{
	name = "NONE";
	level = 1;
	exp = 0;
	maxHealth = 0;
	health = 0;
	attack = 0;
	defence = 0;
}

Player::Player(std::string name, int maxHealth, int attack, int defence)
{
	this->name = name;
	this->maxHealth = maxHealth;
	this->attack = attack;
	this->defence = defence;
	initialise(name);
}

Player::~Player()
{

}

//Functions

void Player::initialise(std::string name)
{
	this->name = name;
	this->level = level;
	this->exp = 0;
	this->expNext = 
		(50/3)*(pow(level,3) -
		6*pow(level,3) +
		(17*level) - 11);
	this->maxHealth = maxHealth;
	this->health = this->maxHealth;
	this->attack = attack;
	this->defence = defence;
}


void Player::levelUp()
{
	while (exp >= expNext)
	{
		exp -= expNext;
		level++;
		this->expNext =
			(50 / 3) * (pow(level, 3) -
			6 * pow(level, 3) +
			(17 * level) - 11);

		this->maxHealth += 2;
		this->health = maxHealth;
		this->attack += 1;
		this->defence += 1;
	}
}

void Player::showStats()
{
	std::cout << "~Player Statistics~" << this->name << std::endl;
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Level = " << this->level << std::endl;
	std::cout << "Exp = " << this->exp << std::endl;
	std::cout << "Exp to level up = " << this->expNext << std::endl;
	std::cout << "Health = " << this->health << "/" <<this->maxHealth << std::endl;
	std::cout << "Attack = " << this->attack << std::endl;
	std::cout << "Defence = " << this->defence << std::endl;
	std::cout << std::endl;
}

void Player::setPlayer(std::string name, int maxHealth, int attack, int defence)
{
	this->name = name;
	this->maxHealth = maxHealth;
	this->attack = attack;
	this->defence = defence;
	initialise(name);
}
