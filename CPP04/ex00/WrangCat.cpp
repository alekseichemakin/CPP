//
// Created by lexa on 05.09.2021.
//

#include "WrangCat.hpp"

WrangCat::WrangCat() {
	this->type = "Wrong_Cat";
	std::cout << "[Wrong_Cat]: Default constructor call" << std::endl;
}

WrangCat::~WrangCat() {
	std::cout << "[" << this->type << "]: Destructor call" << std::endl;
}

WrangCat::WrangCat(const std::string &type) {
	this->type = type;
	std::cout << "[" << this->type << "]: Constructor call" << std::endl;
}

void WrangCat::makeSound() const {
	std::cout << "[" << this->type << "]: Wrong Meow! Wrong Meow! Wrong Meow!" << std::endl;
}

WrangCat & WrangCat::operator=(const WrangCat &other) {
	this->type = other.type;
	return *this;
}