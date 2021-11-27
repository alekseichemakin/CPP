#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap A("A");
	ScavTrap B("B");

	std::cout << "\n================\n" << std::endl;

	A.attack("B");
	A.takeDamage(5);
	A.beRepaired(3);
	B.attack("A");
	B.takeDamage(15);
	B.beRepaired(13);
	B.guard();

	std::cout << "\n================\n" << std::endl;

	ClapTrap *C;
	C = new ScavTrap("C");
	C->attack("A");

	std::cout << "\n================\n" << std::endl;

	delete C;
	return (0);
}
