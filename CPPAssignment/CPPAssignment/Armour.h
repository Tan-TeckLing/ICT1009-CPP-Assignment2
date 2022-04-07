#pragma once

#include "Item.h"

class Armour : public Item
{
private:
	int type;
	Stats stats;

public:
	Armour();
	virtual ~Armour();

	//Pure virtual
	virtual Armour* clone()const override;

	//Functions
	std::string toString();
	void setStats(std::string name, int defence);

	//Accessors
	inline const int& getType() const { return this->type; }

	//Stats
	void setStat(Stats);
	Stats getStat();
};