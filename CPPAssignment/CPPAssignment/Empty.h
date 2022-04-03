#ifndef EMPTY_H
#define EMPTY_H

#include "Scenario.h"
#include "ScenarioSystem.h"

class Empty : public Scenario
{
public:
	Empty(int);
	~Empty();
	void scenarioUpdate();

private:

};


#endif // !EMPTY_H

