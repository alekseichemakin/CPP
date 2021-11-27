#include <vector>
#include "easyfind.hpp"
#include <list>

int main()
{
	std::cout << "============ TEST VECTOR ============" << std::endl;
	std::vector<int> a;
	for (int i = 0; i < 10; ++i) {
		a.push_back(10 - i);
	}
	try {
		std::cout << *easyfind(a, 2) << std::endl;
		std::cout << *easyfind(a, 11) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "============ TEST LIST ============" << std::endl;
	std::list<int> b;
	for (int i = 0; i < 10; ++i) {
		b.push_back(10 - i);
	}
	try {
		std::cout << *easyfind(b, 5) << std::endl;
		std::cout << *easyfind(b, 11) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "============ TEST MAP ============" << std::endl;
	std::map<int, std::string> c;
	for (int i = 0; i < 10; ++i) {
		c.insert(std::pair<int, std::string>(i, "ok"));
	}
	try {
		std::cout << easyfind(c, 5)->second << std::endl;
		std::cout << easyfind(c, 11)->second << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}