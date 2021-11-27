#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	this->_Name = "Unknown";
	this->_Hitpoints = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	std::cout << "ScavTrap [" << this->_Name << "]: create" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap [" << this->_Name << "]: destructor call" << std::endl;
}

ScavTrap::ScavTrap(const std::string& Name) {
	this->_Name = Name;
	this->_Hitpoints = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	std::cout << "ScavTrap [" << this->_Name << "]: create" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;
	std::cout << "ScavTrap [" << this->_Name << "]: create" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap [" << this->_Name << "]: attack [" << target << "], causing <" <<
			  this->_Hitpoints << "> points of damage!" << std::endl;
}

void ScavTrap::guard() {
	std::cout << "ScavTrap [" << this->_Name << "]: have enter in Gate keeper mode"
											"." << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &other) {
	if (this == &other)
		return *this;
	this->_Name = other.getName();
	this->_Hitpoints = other.getHP();
	this->_Energy = other.getEnergy();
	this->_Attack = other.getAttack();
	return *this;
}