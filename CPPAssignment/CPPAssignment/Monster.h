#ifndef MONSTER_H
#define MONSTER_H

#include "Entity.h"

class Monster : public Entity
{
public:
	Monster();
	~Monster();

	void generateMonster();

	friend ostream& operator<<(ostream&, const Monster);
private:

};


#endif // !MONSTER_H

