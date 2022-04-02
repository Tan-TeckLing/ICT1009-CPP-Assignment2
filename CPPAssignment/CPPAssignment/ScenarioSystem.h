#ifndef SCENARIOSYSTEM_H
#define SCENARIOSYSTEM_H

#include "ScenarioSystem.h"
#include "Scenario.h"
#include "RoadJunction.h"
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

	Scenario* currentScenario;
	list<Scenario*> pastScenario;
private:

};

extern ScenarioSystem* scenarioSystem;

#endif // !SCENARIOSYSTEM_H

