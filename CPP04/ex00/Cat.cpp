//
// Created by lexa on 05.09.2021.
//

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "[" << this->type << "]: Default constructor call" << std::endl;
}

Cat::~Cat() {
	std::cout << "[" << this->type << "]: Destructor call" << std::endl;
}

Cat::Cat(const std::string &type) {
	this->type = type;
	std::cout << "[" << this->type << "]: Copy constructor call" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[" << this->type << "]: Meow! Meow! Meow!" << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}