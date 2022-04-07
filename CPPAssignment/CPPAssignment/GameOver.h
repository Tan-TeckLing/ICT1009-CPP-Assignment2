#ifndef GAMEOVER_H
#define GAMEOVER_H

#include "Scenario.h"
#include "ScenarioSystem.h"

class GameOver : public Scenario
{
public:
	GameOver(int);
	~GameOver();
	void scenarioUpdate();

private:

};


#endif // !GAMEOVER_H

