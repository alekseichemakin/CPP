#include "ClapTrap.hpp"

int main ()
{
	ClapTrap A("A");

	A.attack("B");
	A.takeDamage(5);
	A.beRepaired(3);


	return (0);
}