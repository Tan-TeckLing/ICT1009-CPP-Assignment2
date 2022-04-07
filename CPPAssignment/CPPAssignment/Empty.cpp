#include "Empty.h"


Empty::Empty(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Empty";
	this->sceneType = ScenarioType::EMPTY;
	this->sceneClear = false;
}

Empty::~Empty()
{
}

void Empty::scenarioUpdate()
{
	switch (rand() % 3)
	{
	case 0:
		cout << "You have arrived at an empty room." << endl;
		break;
	case 1:
		cout << "You have reached an empty walkway." << endl;
		break;
	case 2:
		cout << "You have encountered an empty path." << endl;
		break;
	}

	switch (rand() % 3)
	{
	case 0:
		cout << "After looking around, you decided to carry on with your journey." << endl;
		break;
	case 1:
		cout << "You decided to sit down and take a short break, and after a few minutes you stood up and decided to continue." << endl;
		break;
	case 2:
		cout << "You hear some weird noises ahead." << endl;
		cout << "After a few minutes, nothing happened still, so you decided to move along." << endl;
		break;
	}

	this->sceneClear = true;

	cout << "\n----------------------Press any key to continue----------------------\n" << endl;
	_getch();

	scenarioSystem->newScenario();
}
