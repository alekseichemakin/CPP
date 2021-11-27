#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	this->type = type;
}

const std::string & AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	std::cout << "use on: " << target.getName() << std::endl;
}