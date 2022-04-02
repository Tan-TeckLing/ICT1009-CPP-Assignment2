#pragma once

#include <string>

class Player
{
public:
	Player();
	virtual ~Player();

private:
	string name;
	int level;
	int maxHealth;
	int health;
	int defence;
	int attack;
	double xPos;
	double yPos;
};

