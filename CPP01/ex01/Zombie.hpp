#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
	void set_name(std::string name);

private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif //CPP01_ZOMBIE_HPP
