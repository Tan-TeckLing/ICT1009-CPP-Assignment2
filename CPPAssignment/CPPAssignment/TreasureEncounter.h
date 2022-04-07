#ifndef TREASUREENCOUNTER_H
#define TREASUREENCOUNTER_H

#include "Scenario.h"
#include "ScenarioSystem.h"

class TreasureEncounter : public Scenario
{
public:
	TreasureEncounter(int);
	~TreasureEncounter();

	void scenarioUpdate();
	int checkDecisionInput(string);

private:

};


#endif // !TREASURE_H
