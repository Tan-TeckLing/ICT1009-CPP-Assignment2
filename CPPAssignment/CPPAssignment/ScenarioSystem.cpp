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
	if (gameSystem->player->getStat()->getCurrentHealth() > 0)
	{
		switch (rand() % (int)ScenarioType::NUM_SCENARIOTYPE)
		{
		case 0:
			this->currentScenario = new RoadJunction(this->pastScenario.size());
			break;
		case 1:
			this->currentScenario = new TreasureEncounter(this->pastScenario.size());
			break;
		case 2:
			this->currentScenario = new MonsterEncounter(this->pastScenario.size());
			break;
		case 3:
			this->currentScenario = new Empty(this->pastScenario.size());
			break;
		default:
			this->currentScenario = new Empty(this->pastScenario.size());
			break;
		}
		gameSystem->player->getStat()->setCurrentHealth(gameSystem->player->getStat()->getCurrentHealth());
	}
	else
	{
		this->currentScenario = new GameOver(this->pastScenario.size());
	}
	this->currentScenario->scenarioUpdate();
}

void ScenarioSystem::gameOverScene()
{
}

void ScenarioSystem::newScenario(ScenarioType scenarioType)
{
	this->pastScenario.push_back(this->currentScenario);
	switch (scenarioType)
	{
	case ScenarioType::TREASURE:
		this->currentScenario = new TreasureEncounter(this->pastScenario.size());
		break;
	case ScenarioType::MONSTER:
		this->currentScenario = new MonsterEncounter(this->pastScenario.size());
		break;
	case ScenarioType::JUNCTION:
		this->currentScenario = new RoadJunction(this->pastScenario.size());
		break;
	case ScenarioType::EMPTY:
		this->currentScenario = new Empty(this->pastScenario.size());
		break;
	case ScenarioType::GAMEOVER:
		this->currentScenario = new GameOver(this->pastScenario.size());
		break;
	}
	this->currentScenario->scenarioUpdate();
}
