#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H
#include <iostream>

class Weapon{
public:
	~Weapon();
	Weapon();
	Weapon(std::string type);

	const std::string& getType();
	void setType(std::string type);

private:
	std::string _type;
};

#endif