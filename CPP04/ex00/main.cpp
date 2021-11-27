//
// Created by lexa on 05.09.2021.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrangCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n============\n" << std::endl;

	std::cout << "j type: " << j->getType() << " " << std::endl;
	std::cout << "i type: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n============\n" << std::endl;

	const WrongAnimal* d = new WrangCat();
	std::cout << d->getType() << " " << std::endl;
	d->makeSound();

	std::cout << "\n============\n" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete d;
}