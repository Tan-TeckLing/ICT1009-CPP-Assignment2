#pragma once

#include "Item.h"

class Weapon : public Item
{
private:
	int type;
	Stats stats;
public:
	Weapon();
		virtual ~Weapon();
	//Pure virtual
	virtual Weapon* clone()const override;

	//Functions
	std::string toString();
	void setStats(std::string name, int attack);

	//Accessors
	inline const int& getType() const { return this->type; }

	//Stats
	void setStat(Stats);
	Stats getStat();


};