#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout << "<" << this->_name << "> DEAD" << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name) {
	this->_name = name;
}
