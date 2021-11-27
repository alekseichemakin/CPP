#include <iostream>
#include <string>
#include "Convert.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Wrong argument" << std::endl;
		return 1;
	}

	Convert c(argv[1]);

	c.to_char();
	c.to_int();
	c.to_float();
	c.to_double();

	return 0;
}