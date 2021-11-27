//
// Created by lexa on 05.09.2021.
//

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "[Cat]: Default constructor call" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "[" << this->type << "]: Destructor call" << std::endl;
}

Cat::Cat(const std::string &type) {
	this->type = type;
	this->brain = new Brain();
	std::cout << "[" << this->type << "]: Constructor call" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[" << this->type << "]: Meow! Meow! Meow!" << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
	if (this == &other)
		return *this;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	return *this;
}

Cat::Cat(const Cat &other) {
	this->type = other.type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, other.brain->getIdea(i));
	std::cout << "[" << this->type << "]: copy constructor call" << std::endl;
}