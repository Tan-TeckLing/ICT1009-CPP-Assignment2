#pragma once

#include "Inventory.h"
#include "Entity.h"
#include "Stats.h"

#include <iostream>


class Player : public Stats, public Entity
{
private:
	int level;
	double exp;
	double expNext;
	double xPos;
	double yPos;
	Stats stats;
	Entity entity;

public:
	Player();
	Player(double exp, double expNext, double xPos, double yPos);
	virtual ~Player();

	//Functions
	//void initialise(std::string name);
	void levelUp();
	void showStats();
	void classSelect(std::string name, int maxHealth, int attack, int defence);


	//Accessors
	inline const int& getLevel() const { return this->level; }
	inline const double& getExp() const { return this->exp; }
	inline const double& getExpNext() const { return this->expNext; }
	inline const double& getX() const { return this->xPos; }
	inline const double& getY() const { return this->yPos; }

	//Stats
	void setStat(Stats);
	Stats getStat();

	//Entity
	void setEntity(Entity);
	Entity getEntity();
};

