#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Player.h"
#include "ScenarioSystem.h"

using namespace std;

void menu(int &c)
{
	cout << "~Console RPG!~" << endl;
	cout << "1. Start Game" << endl;
	cout << "2. Exit" << endl;
	cin >> c;

	switch (c)
	{
	case 1: 
		cout << "The Story Begins..." << endl;
		break;
	case 2: 
		cout << "Exiting Game" << endl;
		break;
	default:
		cout << "Invalid Input" << endl;
		break;
	}
	cout << endl;
}

void classSelect(int& c) {
	std::string name;

	cout << "What is your name, warrior?" << endl;
	cin >> name;
	cout << "Greetings, " << name << endl;
	cout << endl;
	cout << "~Class Selection Screen~" << endl;
	cout << "Select your class: " << endl;
	cout << "1. Knight" << endl;
	cout << "2. Rogue" << endl;
	cout << "3. Berzerker" << endl;
	cin >> c;

	switch (c)
	{
	case 1:
		cout << "You have chosen the durable Knight!" << endl;
		return gameSystem->player->classSelect(name, 6, 2, 4); //stats are by maxHp, attack, defence
	case 2:
		cout << "You have chosen the dangerous Rogue!" << endl;
		return gameSystem->player->classSelect(name, 6, 4, 2);
	case 3:
		cout << "You have chosen the ruthless Berzerker!" << endl;
		return gameSystem->player->classSelect(name, 4, 7, 1);
	default:
		cout << "You have chosen the ruthless Adventurer!" << endl;
		return gameSystem->player->classSelect(name, 4, 4, 4);
	}
	cout << endl;
}


int main()
{	

	int choice = 0;

	menu(choice);

	if (choice == 2)
	{
		exit(1);
	}
	else
	{
		classSelect(choice);
	}


	cout << "You better move fast, " << gameSystem->player->getStat()->getName() << ". The goblins are attacking the city." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();

	scenarioSystem->newScenario();
	scenarioSystem->currentScenario->scenarioUpdate();
	scenarioSystem->currentScenario->scenarioUpdate();

	return 0;
}