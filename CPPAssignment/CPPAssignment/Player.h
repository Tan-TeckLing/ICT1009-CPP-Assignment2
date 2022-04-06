#pragma once

#include "Inventory.h"
#include <iostream>


static class Player
{
private:
	std::string name;
	int level;
	double exp;
	double expNext;
	int maxHealth;
	int health;
	int attack;
	int defence;
	double xPos;
	double yPos;

public:
	Player();
	Player(std::string name, int maxHealth, int attack, int defence);
	virtual ~Player();

	//Functions
	void initialise(std::string name);
	void levelUp();
	void showStats();
	void setPlayer(std::string name, int maxHealth, int attack, int defence);

	//Accessors
	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const double& getExp() const { return this->exp; }
	inline const double& getExpNext() const { return this->expNext; }
	inline const int& getMaxHealth() const { return this->maxHealth; }
	inline const int& getHealth() const { return this->health; }
	inline const int& getAttack() const { return this->attack; }
	inline const int& getDefence() const { return this->defence; }
	inline const double& getX() const { return this->xPos; }
	inline const double& getY() const { return this->yPos; }
};

