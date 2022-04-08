#include "GameSystem.h"


GameSystem* gameSystem = new GameSystem();

GameSystem::GameSystem()
{
	this->player = new Player();
	this->inventory = new Inventory();
}

GameSystem::~GameSystem()
{
}