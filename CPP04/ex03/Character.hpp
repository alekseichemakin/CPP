//
// Created by lexa on 06.09.2021.
//

#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
public:
	Character();
	virtual ~Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character &operator=(const Character &other);
	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
protected:
	std::string name;
	AMateria *equipment[4];
};


#endif //CPP04_CHARACTER_HPP
