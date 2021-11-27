//
// Created by lexa on 02.09.2021.
//

#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP

#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	virtual ~FragTrap();
	FragTrap(const std::string &Name);
	FragTrap(const FragTrap &other);
	void highFivesGuys(void);
	FragTrap & operator = (const FragTrap &other);
private:

};


#endif //CPP03_FRAGTRAP_HPP
