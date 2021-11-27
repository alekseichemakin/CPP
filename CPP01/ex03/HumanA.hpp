#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(const std::string name, Weapon& weapon);
	void attack();

private:
	std::string _name;
	Weapon &_weapon;
};


#endif //CPP01_HUMANA_H
