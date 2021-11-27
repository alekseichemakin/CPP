#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
//	ClapTrap A("A");
//	ScavTrap B("B");
	FragTrap C("C");

//	A.attack("B");
//	A.takeDamage(5);
//	A.beRepaired(3);
//	B.attack("A");
//	B.takeDamage(15);
//	B.beRepaired(13);
//	B.guard();
	C.attack("D");
	C.takeDamage(35);
	C.beRepaired(24);
	C.highFivesGuys();
	return (0);
}