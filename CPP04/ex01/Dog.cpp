//
// Created by lexa on 05.09.2021.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "[Dog]: Default constructor call" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "[" << this->type << "]: Destructor call" << std::endl;
}

Dog::Dog(const std::string &type) {
	this->type = type;
	this->brain = new Brain();
	std::cout << "[" << this->type << "]: Constructor call" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[" << this->type << "]: Gav! Gav! Gav!" << std::endl;
}

Dog & Dog::operator=(const Dog &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	return *this;
}

Dog::Dog(const Dog &other) {
	this->type = other.type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->brain->setIdea(i, other.brain->getIdea(i));
	}
	std::cout << "[" << this->type << "]: Copy constructor call" << std::endl;
}

std::string Dog::getIdea(int n) {
		return brain->getIdea(n);
}

void Dog::setIdea(int n, const std::string& str) {
	brain->setIdea(n, str);
}