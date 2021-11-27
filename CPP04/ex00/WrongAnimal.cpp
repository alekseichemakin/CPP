//
// Created by lexa on 05.09.2021.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "[WrongAnimal]: Default constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) {
	this->type = type;
	std::cout << "[" << this->type << "]: Constructor call" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal]: Destructor call" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "[" << this->type << "]: *Wrong make sound*" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	return  *this;
}