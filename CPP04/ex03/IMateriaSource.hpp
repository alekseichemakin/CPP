//
// Created by lexa on 06.09.2021.
//

#ifndef CPP04_IMATERIASOURCE_HPP
#define CPP04_IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP04_IMATERIASOURCE_HPP
