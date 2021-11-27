//
// Created by lexa on 06.09.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		this->materia[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
			delete this->materia[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; ++i) {
		if (other.materia[i] != nullptr)
			this->materia[i] = other.materia[i]->clone();
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		delete this->materia[i];
	}
	for (int i = 0; i < 4; ++i) {
		if (other.materia[i] != nullptr)
			this->materia[i] = other.materia[i]->clone();
		else
			this->materia[i] = nullptr;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (this->materia[i] == nullptr) {
			this->materia[i] = m;
			return;
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (this->materia[i] != nullptr && this->materia[i]->getType() == type)
		{
			AMateria *a = this->materia[i]->clone();
			return (a);
		}
	}
	return (nullptr);
}