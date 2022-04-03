#include "Empty.h"


Empty::Empty(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Road Junction";
	this->sceneType = ScenarioType::JUNCTION;
	this->sceneClear = false;
}

Empty::~Empty()
{
}

void Empty::scenarioUpdate()
{
	string directionInput;
	int textType = rand() % 3;
	switch (textType)
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

	cout << "\n----------------------Press any key to continue----------------------\n\n" << endl;
	_getch();

	scenarioSystem->newScenario();
}
