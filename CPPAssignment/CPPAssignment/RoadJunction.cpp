#include "RoadJunction.h"

RoadJunction::RoadJunction(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Road Junction";
	this->sceneType = ScenarioType::JUNCTION;
	this->sceneClear = false;
}

RoadJunction::~RoadJunction()
{
}

void RoadJunction::scenarioUpdate()
{
	string directionInput;
	int directionCount = generateDirections();
	while (!this->sceneClear)
	{
		switch (directionCount)
		{
		case 2:
			cout << "You have encountered junction, please choose a path: " << TWODIR << endl;
			break;
		case 3:
			cout << "You have encountered junction, please choose a path: " << THREEDIR << endl;
			break;
		}

		getline(cin, directionInput);
		transform(directionInput.begin(), directionInput.end(), directionInput.begin(), ::tolower);
		this->sceneClear = checkDirectionInput(directionCount, directionInput);

		cout << "\n----------------------Press any key to continue----------------------\n" << endl;
		_getch();

	}
	scenarioSystem->newScenario();
}

int RoadJunction::generateDirections()
{
	return rand() % 2 + 2;
}

bool RoadJunction::checkDirectionInput(int directionCount, string directionInput)
{
	if (directionInput == "left")
	{
		cout << "You have decided to take the [Left] path" << endl;
		return true;
	}
	else if (directionInput == "right")
	{
		cout << "You have decided to take the [Right] path" << endl;
		return true;
	}
	else if (directionCount == 3 && directionInput == "center")
	{
		cout << "You have decided to take the [Center] path" << endl;
		return true;
	}
	cout << "Invalid input has been detected. Please try again"<< endl;
	return false;
}
