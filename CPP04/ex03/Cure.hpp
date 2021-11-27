//
// Created by lexa on 06.09.2021.
//

#ifndef CPP04_CURE_HPP
#define CPP04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	AMateria * clone() const;
	void use(ICharacter &target);
};


#endif //CPP04_CURE_HPP
