//
// Created by lexa on 05.09.2021.
//

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << "[Animal]: Default constructor call" << std::endl;
}

Animal::Animal(const std::string& type) {
	this->type = type;
	std::cout << "[" << this->type << "]: Constructor call" << std::endl;
}

Animal::~Animal() {
	std::cout << "[Animal]: Destructor call" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "[" << this->type << "]: *make sound*" << std::endl;
}

Animal & Animal::operator=(const Animal &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	return  *this;
}