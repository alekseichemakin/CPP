//
// Created by lexa on 03.09.2021.
//

#ifndef CPP03_DIAMONDTRAP_HPP
#define CPP03_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	virtual ~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap(const std::string& name);
	DiamondTrap & operator=(const DiamondTrap &other);

	void attack(std::string const & target);
	void whoAmI();
private:
	std::string _Name;
};


#endif //CPP03_DIAMONDTRAP_HPP
