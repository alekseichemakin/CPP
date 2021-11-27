#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_Name = "Unknown";
	ClapTrap::_Name = "Unknown_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap [" << this->_Name << "]: create" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap [" << this->_Name << "]: destructor call" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) {
	this->_Name = name;
	ClapTrap::_Name = name + "_clap_name";
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap [" << this->_Name << "]: create" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
	std::cout << "DiamondTrap [" << this->_Name << "]: create" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &other) {
	if (this == &other)
		return *this;
	this->_Name = other._Name;
	this->_Hitpoints = other.getHP();
	this->_Energy = other.getEnergy();
	this->_Attack = other.getAttack();
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap: " << this->_Name << "; ClapTrap: " << ClapTrap::_Name << ";" << std::endl;
}