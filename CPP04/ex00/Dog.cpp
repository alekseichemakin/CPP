//
// Created by lexa on 05.09.2021.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "[" << this->type << "]: Default constructor call" << std::endl;
}

Dog::~Dog() {
	std::cout << "[" << this->type << "]: Destructor call" << std::endl;
}

Dog::Dog(const std::string &type) {
	this->type = type;
	std::cout << "[" << this->type << "]: Copy constructor call" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[" << this->type << "]: Gav! Gav! Gav!" << std::endl;
}

Dog & Dog::operator=(const Dog &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}