//
// Created by lexa on 02.09.2021.
//

#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap(const std::string& Name);
	ScavTrap & operator = (const ScavTrap &other);

	virtual void attack(std::string const & target);
	void guard();
private:
};


#endif //CPP03_SCAVTRAP_HPP
