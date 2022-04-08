#include "GameOver.h"

GameOver::GameOver(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Game Over";
	this->sceneType = ScenarioType::GAMEOVER;
	this->sceneClear = false;
}

GameOver::~GameOver()
{
}

void GameOver::scenarioUpdate()
{
	cout << "You have died. Game Over" << endl;



	this->sceneClear = true;
	cout << "\n----------------------Press any key to continue----------------------\n" << endl;
	_getch();

	exit(1);
}
