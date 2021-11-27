//
// Created by lexa on 05.09.2021.
//

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++){
		ideas[i] = "idea";
	}
	std::cout << "[Brain]: Constructor called" << std::endl;
}

Brain::~Brain() { std::cout << "[Brain]: Destructor called" << std::endl; }

std::string Brain::getIdea(int n) {
	if (n < 100 && n >= 0)
		return (ideas[n]);
	else
		return ("");
}

void Brain::setIdea(int n, const std::string& idea) {
	if (n < 100 && n >= 0)
		this->ideas[n] = idea;
}