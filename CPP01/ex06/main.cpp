//
// Created by lexa on 27.08.2021.
//

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: wrong arguments" << std::endl;
		return 1;
	}
	Karen k;
	k.filter(argv[1]);
	return (0);
}