#pragma once

#include "Inventory.h"
#include "Entity.h"

#include <iostream>


class Player : public Entity
{
private:
	int level;
	double exp;
	double expNext;
	Entity entity;

public:
	Player();
	virtual ~Player();

	//Functions
	void levelUp();
	void classSelect(std::string name, int maxHealth, int attack, int defence);
	friend ostream& operator<<(ostream&, const Player);

	//Accessors
	inline const int& getLevel() const { return this->level; }
	inline const double& getExp() const { return this->exp; }
	inline const double& getExpNext() const { return this->expNext; }
};
