#ifndef ENTITY_H
#define ENTITY_H

#include "Stats.h"

class Entity
{
public:

	void setStat(Stats);
	Stats getStat();
	void setPoints(int);
	int getPoints();


private:
	Stats stat;
	int points;
};

#endif // !ENTITY_H

