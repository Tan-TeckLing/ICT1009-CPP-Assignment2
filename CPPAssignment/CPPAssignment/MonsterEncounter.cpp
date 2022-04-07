#include "MonsterEncounter.h"


MonsterEncounter::MonsterEncounter(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Monster Encounter";
	this->sceneType = ScenarioType::MONSTER;
	this->sceneClear = false;
}

MonsterEncounter::~MonsterEncounter()
{
}

void MonsterEncounter::scenarioUpdate()
{
	this->monster = new Monster();
	this->monster->generateMonster();
	string decisionInput;
	bool escape = false;
	cout << "You have encountered a " << this->monster->getStat()->getName() << "!" << endl;


	while (!this->sceneClear)
	{
		cout << "The monster prepares to attack, what should you do? [Attack/Item/Escape/Stats]" << endl;
		getline(cin, decisionInput);
		transform(decisionInput.begin(), decisionInput.end(), decisionInput.begin(), ::tolower);

		switch (checkDecisionInput(decisionInput))
		{
		case 0:
			this->monster->getStat()->takeDamage(1);
			cout << "You dealt 1 damage to the monster!" << endl;
			if (this->monster->getStat()->getCurrentHealth() == 0)
			{
				cout << "The monster has died and collapsed onto the floor." << endl;
				this->sceneClear = true;
				break;
			}
			cout << "You took 1 damage from the monster!" << endl;
			/*
			*	Player take hp damage
			*	if player hp == 0, cout flavour text and this->sceneClear = true;
			*/

			break;
		case 1:
			cout << "You have used an item." << endl;
			/*
			*	Player heals
			*/
			break;
		case 2:
			switch (rand() % 2)
			{
			case 0:
				cout << "You have successfully escaped!." << endl;
				this->sceneClear = true;
				escape = true;
				break;
			default:
				cout << "You have failed to escaped!." << endl;
				/*
				*	Player take hp damage
				*	if player hp == 0, cout flavour text and this->sceneClear = true;
				*/
				escape = false;
				break;
			}
			break;
		case 3:
			cout << "You are viewing the Monster's stats" << endl;
			cout << *this->monster << endl;
			cout << "You are viewing your stats" << endl;
			/*
			*	cout player's stat
			*/
			break;
		default:
			cout << "Invalid input has been detected. Please try again" << endl;
			break;
		}

		if (this->monster->getStat()->getCurrentHealth() == 0)
			this->sceneClear = true;
		cout << endl;
	}

	cout << "\n----------------------Press any key to continue----------------------\n" << endl;
	_getch();
	scenarioSystem->newScenario();
}

int MonsterEncounter::checkDecisionInput(string decisionInput)
{
	if (decisionInput == "attack")
	{
		cout << "You decided to attack the monster!" << endl;

		return 0;
	}
	else if (decisionInput == "item")
	{
		cout << "You decided to use and item!" << endl;

		return 1;
	}
	else if (decisionInput == "escape")
	{
		cout << "You tried to escape" << endl;

		return 2;
	}
	else if (decisionInput == "stats")
	{
		cout << "You are viewing stats" << endl;

		return 3;
	}
	return -1;
}
