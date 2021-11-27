#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap D("D");

	D.attack("a");
	D.guard();
	D.takeDamage(13);
	D.whoAmI();

	ClapTrap *A;
	A = new DiamondTrap("A");
	A->attack("D");
	delete A;
	return (0);
}