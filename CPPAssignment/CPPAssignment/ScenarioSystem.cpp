#include "ScenarioSystem.h"

ScenarioSystem* scenarioSystem = new ScenarioSystem();

ScenarioSystem::ScenarioSystem()
{
}

ScenarioSystem::~ScenarioSystem()
{
}

void ScenarioSystem::newScenario()
{
	this->pastScenario.push_back(this->currentScenario);
	this->currentScenario = new RoadJunction(this->pastScenario.size());
	this->currentScenario->scenarioUpdate();
}