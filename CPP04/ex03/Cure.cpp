//
// Created by lexa on 06.09.2021.
//

#include "Cure.hpp"

Cure::Cure() {
	type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure &other) {
	this->type = other.getType();
}

Cure & Cure::operator=(const Cure &other) {
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria * Cure::clone() const {
	Cure *a = new Cure(*this);
	return (a);
}