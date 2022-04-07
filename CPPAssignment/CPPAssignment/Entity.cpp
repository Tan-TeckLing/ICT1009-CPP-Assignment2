#include "Entity.h"


void Entity::setStat(Stats* stat)
{
	this->stat = stat;
}

Stats* Entity::getStat()
{
	return this->stat;
}

void Entity::setPoints(int points)
{
	this->points = points;
}

int Entity::getPoints()
{
	return this->points;
}

ostream& operator<<(ostream& out, Entity entity)
{

	out << "Entity\n" << entity.getStat() << endl;

	return out;
}