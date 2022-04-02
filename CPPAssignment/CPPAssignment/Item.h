#pragma once

#include <string>
#include <iostream>


class Item
{
private:
	std::string name;
	int value;
public:
	Item();
	virtual ~Item();
};

