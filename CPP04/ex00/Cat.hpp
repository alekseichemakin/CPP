//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	virtual ~Cat();
	Cat(const std::string &type);
	virtual void makeSound() const;
	Cat &operator=(const Cat &other);
};


#endif //CPP04_CAT_HPP
