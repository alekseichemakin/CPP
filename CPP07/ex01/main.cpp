#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T &s)
{
	std::cout << s << std::endl;
}

int main(){
	std::string str[] = {"Aaaa", "Bbbbb", "O0000", "Bbbbb", "Aaaaa"};
	double d[] = {8.9, 2.4, 6.7};

	::iter(str, 5, &print);
	::iter(d, 3, &print);

	return 0;
}