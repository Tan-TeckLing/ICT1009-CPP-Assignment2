#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>
#include "ScenarioType.h"

using namespace std;

class Scenario
{
public:
	virtual void scenarioUpdate() = 0;

	void setSceneTag(int);
	int getSceneTag();
	void setSceneName(string);
	string getSceneName();
	void setSceneType(ScenarioType);
	ScenarioType getSceneType();


protected:
	int sceneTag;
	string sceneName;
	ScenarioType sceneType;

};

#endif // !SCENARIO_H
