#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_Name = "Unknown";
	this->_Hitpoints = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout << "FragTrap [" << this->_Name << "]: create" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap [" << this->_Name << "]: destructor call" << std::endl;
}

FragTrap::FragTrap(const std::string& Name) {
	this->_Name = Name;
	this->_Hitpoints = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout << "FragTrap [" << this->_Name << "]: create" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	*this = other;
	std::cout << "FragTrap [" << this->_Name << "]: create" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &other) {
	if (this == &other)
		return *this;
	this->_Name = other.getName();
	this->_Hitpoints = other.getHP();
	this->_Energy = other.getEnergy();
	this->_Attack = other.getAttack();
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap [" << this->_Name << "]: sent positive high fives "
											"request." << std::endl;
}