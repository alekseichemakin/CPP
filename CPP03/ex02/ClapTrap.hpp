//
// Created by lexa on 01.09.2021.
//

#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(const std::string& Name);
	ClapTrap(const ClapTrap &other);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	ClapTrap & operator = (const ClapTrap &other);
	int getHP() const;
	int getEnergy() const;
	int getAttack() const;

protected:
	std::string _Name;
	int _Hitpoints;
	int _Energy;
	int _Attack;
};


#endif //CPP03_CLAPTRAP_HPP
