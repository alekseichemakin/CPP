#include "Zombie.hpp"

int	main()
{
	std::cout << "========== 1 TEST ============" << std::endl;

	std::string names[5] = {"GAG", "BOB", "KOK", "BEK", "LOL"};
	for (int i = 0; i < 5; ++i) {
		randomChump(names[i]);
	}

	std::cout << "========== 2 TEST ============" << std::endl;
	Zombie *zombPtr;
	zombPtr = newZombie("KING");
	zombPtr->announce();
	delete zombPtr;

	return (0);
}