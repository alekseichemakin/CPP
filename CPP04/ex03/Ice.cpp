#include "Ice.hpp"

Ice::Ice() {
	type = "ice";
}

Ice::~Ice() {}

Ice::Ice(const Ice &other) {
	this->type = other.getType();
}

Ice & Ice::operator=(const Ice &other) {
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria * Ice::clone() const {
	Ice *a = new Ice(*this);
	return (a);
}