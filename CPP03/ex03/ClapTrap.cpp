//
// Created by lexa on 01.09.2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_Name("Unknown"), _Hitpoints(10), _Energy(10), _Attack(0)
{
	std::cout << "ClapTrap [" << this->_Name << "]: create" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	this->_Name = other._Name;
	this->_Hitpoints = other._Hitpoints;
	this->_Energy = other._Energy;
	this->_Attack = other._Attack;
	std::cout << "ClapTrap [" << this->_Name << "]: create" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap [" << this->_Name << "]: destructor call" << std::endl;
}

ClapTrap::ClapTrap(const std::string& Name) :
_Name(Name), _Hitpoints(10), _Energy(10), _Attack(0)
{
	std::cout << "ClapTrap [" << this->_Name << "]: create" << std::endl;
}

std::string ClapTrap::getName() const {
	return (this->_Name);
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap [" << this->_Name << "]: attack [" << target << "], "
																		   "causing <" <<
	this->_Hitpoints << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	if (this->_Hitpoints < 0)
		this->_Hitpoints = 0;
	std::cout << "ClapTrap [" << this->_Name << "]: take <"<< amount <<"> damage. "
																   "HP: " << this->_Hitpoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "ClapTrap [" << this->_Name << "]: repair HP on <" << amount << ">"
																			 ". HP: " << this->_Hitpoints << std::endl;
}

int ClapTrap::getAttack() const {
	return (this->_Attack);
}

int ClapTrap::getEnergy() const {
	return (this->_Energy);
}

int ClapTrap::getHP() const {
	return (this->_Hitpoints);
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) {
	if (this == &other)
		return *this;
	this->_Name = other._Name;
	this->_Hitpoints = other._Hitpoints;
	this->_Energy = other._Energy;
	this->_Attack = other._Attack;
	return *this;
}