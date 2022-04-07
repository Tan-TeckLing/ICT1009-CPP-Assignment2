#ifndef SCENARIOSYSTEM_H
#define SCENARIOSYSTEM_H

#include "GameSystem.h"
#include "Scenario.h"
#include "TreasureEncounter.h"
#include "MonsterEncounter.h"
#include "RoadJunction.h"
#include "Empty.h"
#include "GameOver.h"
#include <list>
#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>


class ScenarioSystem
{
public:
	ScenarioSystem();
	~ScenarioSystem();

	void newScenario();
	void newScenario(ScenarioType);
	void gameOverScene();

	Scenario* currentScenario;
	list<Scenario*> pastScenario;
private:

};

extern ScenarioSystem* scenarioSystem;

#endif // !SCENARIOSYSTEM_H

