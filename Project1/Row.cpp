#include "Row.h"

std::ostream& operator<<(std::ostream& os, const Row& p)
{
	return os << p.name << std::endl << p.random << std::endl;
}

std::istream& operator>>(std::istream& iss, Row& p)
{
	std::getline(iss, p.name);
	std::string tmp;
	std::getline(iss, tmp);
	p.random = std::stoi(tmp);
	return iss;
}
