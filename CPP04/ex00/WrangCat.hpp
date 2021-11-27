//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_WRANGCAT_HPP
#define CPP04_WRANGCAT_HPP

#include "WrongAnimal.hpp"

class WrangCat : public WrongAnimal{
public:
	WrangCat();
	~WrangCat();
	WrangCat(const std::string &type);
	void makeSound() const;
	WrangCat &operator=(const WrangCat &other);
};


#endif //CPP04_WRANGCAT_HPP
