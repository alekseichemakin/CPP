//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal{
public:
	Dog();
	virtual ~Dog();
	Dog(const std::string &type);
	virtual void makeSound() const;
	Dog &operator=(const Dog &other);
	Dog(const Dog &other);
	std::string getIdea(int n);
	void setIdea(int n, const std::string& str);

private:
	Brain *brain;
};


#endif //CPP04_DOG_HPP
