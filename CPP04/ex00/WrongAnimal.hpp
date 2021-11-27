//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_WRONGANIMAL_HPP
#define CPP04_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
	WrongAnimal &operator = (const WrongAnimal &other);

protected:
	std::string type;
};


#endif //CPP04_WRONGANIMAL_HPP
