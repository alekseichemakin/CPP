#include "span.hpp"

int main() {
	span sp = span(5);
	try {
		sp.addNumber(5);
		std::cout << "ok" << std::endl;
		sp.addNumber(3);
		std::cout << "ok" << std::endl;
		sp.addNumber(17);
		std::cout << "ok" << std::endl;
		sp.addNumber(9);
		std::cout << "ok" << std::endl;
		sp.addNumber(11);
		std::cout << "ok" << std::endl;
		sp.addNumber(11);
		std::cout << "ok" << std::endl;
		sp.addNumber(11);
		std::cout << "ok" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	span bsp = span(10000);
	std::vector<int> b;
	srand(time(nullptr));
	for (int i = 0; i < 10000; ++i) {
		b.push_back(i * 1000);
	}
	bsp.addNumber(b);
	std::cout << bsp.shortestSpan() << std::endl;
	std::cout << bsp.longestSpan() << std::endl;
}