#ifndef STATS_H
#define STATS_H

#include <string>

using namespace std;

class Stats
{
public:
	Stats();
	Stats(int, int, string, int, int);
	~Stats();

	void takeDamage(int);

	void setCurrentHealth(int);
	int getCurrentHealth();
	void setMaxHealth(int);
	int getMaxHealth();
	void setName(string);
	string getName();
	void setDefence(int);
	int getDefence();
	void setAttack(int);
	int getAttack();

private:
	int currentHealth;
	int maxHealth;
	string name;
	int defence;
	int attack;
};

#endif // !STATS_H