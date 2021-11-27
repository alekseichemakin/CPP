//
// Created by lexa on 13.08.2021.
//

#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H

#include <iostream>

class Zombie{
public:
	Zombie(std::string name);
	~Zombie();
	void announce();

private:
	std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //CPP01_ZOMBIE_H
