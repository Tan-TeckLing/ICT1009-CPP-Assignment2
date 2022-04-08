#ifndef ROADJUNCTION_H
#define ROADJUNCTION_H

#include "Scenario.h"
#include "ScenarioSystem.h"

using namespace std;

const string TWODIR = "[Left/Right]";
const string THREEDIR = "[Left/Right/Center]";

class RoadJunction : public Scenario
{
public:
	RoadJunction(int);
	~RoadJunction();

	void scenarioUpdate();
	int generateDirections();
	bool checkDirectionInput(int, string);

private:
	// Inherited via Scenario
};


#endif // !ROADJUNCTION_H
