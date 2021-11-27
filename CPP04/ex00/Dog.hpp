//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	virtual ~Dog();
	Dog(const std::string &type);
	virtual void makeSound() const;
	Dog &operator=(const Dog &other);
};


#endif //CPP04_DOG_HPP
