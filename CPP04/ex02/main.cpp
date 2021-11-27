//
// Created by lexa on 05.09.2021.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog kok("kok");
	kok.setIdea(0, "WOW");
	Dog copykok(kok);
	kok.setIdea(0, "NOO");
	const Animal* i = new Cat();
//	Animal A();

	std::cout << "\n============\n" << std::endl;

	kok.makeSound();
	copykok.makeSound();
	std::cout << "kok idea: " << kok.getIdea(0) << std::endl;
	std::cout << "Copykok idea: " << copykok.getIdea(0) << std::endl;

	std::cout << "\n============\n" << std::endl;
	delete i;
}