#include "Stats.h"

Stats::Stats()
{
	this->maxHealth = 10;
	this->currentHealth = this->maxHealth;
	this->name = "";
	this->defence = 0;
	this->attack = 1;
}

Stats::Stats(int currentHealth, int maxHealth, string name, int defence, int attack)
{
	this->currentHealth = currentHealth;
	this->maxHealth = maxHealth;
	this->name = name;
	this->defence = defence;
	this->attack = attack;
}

Stats::~Stats()
{
}

void Stats::takeDamage(int damage)
{
	// currentHealth reduced by damage taken, limited to 0;
	this->currentHealth = this->currentHealth - damage <= 0 ? 0 : this->currentHealth - damage;
}

void Stats::setCurrentHealth(int currentHealth)
{
	this->currentHealth = currentHealth;
}

int Stats::getCurrentHealth()
{
	return this->currentHealth;
}

void Stats::setMaxHealth(int maxHealth)
{
	this->maxHealth = maxHealth;
}

int Stats::getMaxHealth()
{
	return this->maxHealth;
}

void Stats::setName(string name)
{
	this->name = name;
}

string Stats::getName()
{
	return this->name;
}

void Stats::setDefence(int defence)
{
	this->defence = defence;
}

int Stats::getDefence()
{
	return this->defence;
}

void Stats::setAttack(int attack)
{
	this->attack = attack;
}

int Stats::getAttack()
{
	return this->attack;
}

int Stats::setHeal(int heal)
{
	this->heal = heal;
}

int Stats::getHeal()
{
	return this->heal;
}


ostream& operator<<(ostream& out, Stats stat)
{
	out << "Name: " << stat.getName() << "\n"
		<< "Health: " << stat.getCurrentHealth() << "/" << stat.getMaxHealth() << "\n"
		<< "Attack: " << stat.getAttack() << "\n"
		<< "Defence: " << stat.getDefence() << "\n";

	return out;
}