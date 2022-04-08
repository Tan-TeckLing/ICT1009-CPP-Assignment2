#ifndef GAMESYSTEM_H
#define GAMESYSTEM_H
#include "Player.h"

class GameSystem
{
public:
	GameSystem();
	~GameSystem();

	Player* player;
	Inventory* inventory;

private:

};

extern GameSystem* gameSystem;

#endif // !GAMESYSTEM_H
