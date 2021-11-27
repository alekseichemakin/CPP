//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_ANIMAL_HPP
#define CPP04_ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	Animal(const std::string& type);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
	Animal &operator = (const Animal &other);
protected:
	std::string type;
};


#endif //CPP04_ANIMAL_HPP
