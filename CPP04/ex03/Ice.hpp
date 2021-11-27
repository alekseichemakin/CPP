//
// Created by lexa on 06.09.2021.
//

#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP

#include "AMateria.hpp"

class Ice : public  AMateria{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	AMateria * clone() const;
	void use(ICharacter &target);
};


#endif //CPP04_ICE_HPP
