#ifndef CPP01_HUMANB_HPP
#define CPP01_HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();

private:
	std::string _name;
	Weapon *_weapon;
};

#endif