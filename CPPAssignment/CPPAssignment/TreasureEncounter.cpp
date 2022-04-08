#include "TreasureEncounter.h"


TreasureEncounter::TreasureEncounter(int sceneTag)
{
	this->sceneTag = sceneTag;
	this->sceneName = "Treasure Encounter";
	this->sceneType = ScenarioType::TREASURE;
	this->sceneClear = false;
}

TreasureEncounter::~TreasureEncounter()
{
}

void TreasureEncounter::scenarioUpdate()
{
	string decisionInput;
	cout << "You have found a Treasure room!" << endl;

	switch (rand() % 2)
	{
	case 0:
		cout << "Looking around the room, you see an unopened treasure chest at the corner." << endl;
		break;
	case 1:
		cout << "An unopened treasure chest sits in the center of the room." << endl;
		break;
	}

	int monsterEncounter = 0;
	while (!this->sceneClear)
	{
		cout << "You approach the treasure chest, do you want to open it? [Open/Ignore]" << endl;
		getline(cin, decisionInput);
		transform(decisionInput.begin(), decisionInput.end(), decisionInput.begin(), ::tolower);
		switch (checkDecisionInput(decisionInput))
		{
		case 0:
			cout << "Without looking back, you decided to move forward with your journey" << endl;
			this->sceneClear = true;
			break;
		case 2:
			cout << "As you opened the treasure chest, you have found a new item!" << endl;

		switch (rand() % 3)
		{
		case 0:

			cout << "You found a Weapon!" << endl;
			this->item = new Weapon();
			this->item->generateItem();
			gameSystem->inventory->addItem(this->item);
			cout << "Attack increased by " << this->item->getStat()->getAttack() << "!" << endl;
			gameSystem->player->getStat()->setAttack(gameSystem->player->getStat()->getAttack() + this->item->getStat()->getAttack());
			break;
		case 1:
			cout << "You found Armour!" << endl;
			this->item = new Armour();
			this->item->generateItem();
			gameSystem->inventory->addItem(this->item);
			cout << "Defence increased by " << this->item->getStat()->getDefence() << "!" << endl;
			gameSystem->player->getStat()->setDefence(gameSystem->player->getStat()->getDefence() + this->item->getStat()->getDefence());
			break;
		case 2:
			cout << "You found a Consumable" << endl;
			this->item = new Consumable();
			this->item->generateItem();
			gameSystem->inventory->addItem(this->item);
			cout << "Health recovered by " << this->item->getStat()->getHeal() << "!" << endl;
			gameSystem->player->getStat()->setCurrentHealth(gameSystem->player->getStat()->getCurrentHealth() + this->item->getStat()->getHeal());
			break;
		}
			/* 
				Generate new item 
			*/

			this->sceneClear = true;
			break;
		case 1:
			cout << "As you opened the treasure chest, a monster leaps out and attack you!" << endl;
			monsterEncounter = 1;
			this->sceneClear = true;
			break;
		default:
			this->sceneClear = false;
			break;
		}

	}

	cout << "\n----------------------Press any key to continue----------------------\n" << endl;
	_getch();
	if (monsterEncounter == 0)
		scenarioSystem->newScenario();
	else
		scenarioSystem->newScenario(ScenarioType::MONSTER);


}

int TreasureEncounter::checkDecisionInput(string decisionInput)
{
	if (decisionInput == "open")
	{
		cout << "You have decided to open the treasure chest." << endl;
		return rand() % 2 + 1;
	}
	else if (decisionInput == "ignore")
	{
		cout << "You have decided to ignore the treasure chest." << endl;
		return 0;
	}
	cout << "Invalid input has been detected. Please try again" << endl;
	return -1;
}
