#include "Player.h"

Player::Player()
{
	this->setStat(new Stats());
	level = 1;
	exp = 0;
	expNext =
		(50 / 3) * (pow(level, 3) -
			6 * pow(level, 3) +
			(17 * level) - 11);
}


Player::~Player()
{

}

//Functions


void Player::levelUp()
{
	while (exp >= expNext)
	{
		this->exp -= this->expNext;
		this->level++;
		this->expNext =
			(50 / 3) * (pow(level, 3) -
				6 * pow(level, 3) +
				(17 * level) - 11);

		this->getStat()->setMaxHealth(this->getStat()->getMaxHealth() + 2);
		this->getStat()->setCurrentHealth(this->getStat()->getMaxHealth());
		this->getStat()->setAttack(this->getStat()->getAttack() + 2);
		this->getStat()->setDefence(this->getStat()->getDefence() + 2);
	}
}


void Player::classSelect(std::string name, int maxHealth, int attack, int defence)
{
	this->getStat()->setName(name);
	this->getStat()->setMaxHealth(maxHealth);
	this->getStat()->setCurrentHealth(maxHealth);
	this->getStat()->setAttack(attack);
	this->getStat()->setDefence(defence);
}

ostream& operator<<(ostream& out, Player player)
{
	out << "Player\n" << *player.getStat() << endl;
	return out;
}
