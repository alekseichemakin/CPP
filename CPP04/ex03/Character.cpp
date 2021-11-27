//
// Created by lexa on 06.09.2021.
//

#include "Character.hpp"

Character::Character() : name("no_name"){
	for (int i = 0; i < 4; i++)
		equipment[i] = nullptr;
}

Character::Character(const std::string &nam) : name(nam) {
	for (int i = 0; i < 4; i++)
		equipment[i] = nullptr;
}

Character::~Character() {
	for (int i = 0; i < 4; i++){
			delete equipment[i];
	}
}

Character::Character(const Character &other) {
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->equipment[i] = other.equipment[i]->clone();
}

Character & Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	this->name = other.name;
	for (int i = 0; i < 4; i++){
		delete equipment[i];
	}
	for (int i = 0; i < 4; i++){
		if (equipment[i])
			this->equipment[i] = other.equipment[i]->clone();
		else
			equipment[i] = nullptr;
	}
	return (*this);
}

const std::string & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->equipment[i] == nullptr)
		{
			this->equipment[i] = m;
			return;
		}
	}
	std::cerr << "Error: too many equipment" << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx >= 0 && this->equipment[idx] != nullptr)
		this->equipment[idx] = nullptr;
	for (int i = idx; i < 3; ++i) {
		this->equipment[i] = this->equipment[i + 1];
		this->equipment[i + 1] = nullptr;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && idx >= 0 && this->equipment[idx] != nullptr)
		this->equipment[idx]->use(target);
	else
		std::cout << "Error: no equipment!" << std::endl;
}