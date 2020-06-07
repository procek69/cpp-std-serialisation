#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Row
{
public:
	std::string name;
	int random;
	Row() : name(""), random(0) {}
	Row(std::string _name, int _random) : name(_name), random(_random) {}
	friend std::ostream& operator<<(std::ostream& os, const Row& p);
	friend std::istream& operator>>(std::istream& os, Row& p);
};