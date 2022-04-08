#ifndef ENTITY_H
#define ENTITY_H

#include "Stats.h"
#include <iostream>

class Entity
{
public:
	void setStat(Stats*);
	Stats* getStat();
	void setPoints(int);
	int getPoints();


	friend ostream& operator<<(ostream&, const Entity);
private:
	Stats* stat;
	int points;
};

#endif // !ENTITY_H

