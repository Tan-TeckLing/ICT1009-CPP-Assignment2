#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

#include "ScenarioSystem.h"

using namespace std;

int main()
{
	string name;
	cout << "What is your name, warrior?" << endl;
	getline(cin, name);
	cout << "You better move fast, " << name << ". The goblins are attacking the city." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();

	scenarioSystem->newScenario();
	scenarioSystem->currentScenario->scenarioUpdate();
	scenarioSystem->currentScenario->scenarioUpdate();

	return 0;
}