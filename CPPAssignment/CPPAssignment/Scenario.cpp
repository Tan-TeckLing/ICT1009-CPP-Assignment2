#include "Scenario.h"

void Scenario::setSceneTag(int sceneTag)
{
	this->sceneTag = sceneTag;
}

int Scenario::getSceneTag()
{
	return this->sceneTag;
}

void Scenario::setSceneName(string sceneName)
{
	this->sceneName = sceneName;
}

string Scenario::getSceneName()
{
	return this->sceneName;
}

void Scenario::setSceneType(ScenarioType sceneType)
{
	this->sceneType = sceneType;
}

ScenarioType Scenario::getSceneType()
{
	return this->sceneType;
}
