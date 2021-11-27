#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;
//
//	return 0;
//}

int main(){
	Array<int> numbers(5);
	int* mirror = new int[5];

	for (int i = 0; i < 5; i++)
		{
			numbers[i] = i;
			mirror[i] = i;
		}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "my:\t" << numbers[i] << std::endl;
		std::cout << "orig:\t" << numbers[i] << std::endl;
	}


	Array<char> a(3);
	for (int i = 0; i < 3; i++){
		a[i] = 'a';
	}
	Array<char> c(a);
	for (int i = 0; i < 3; i++){
		a[i] = 'c';
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << "a:\t" << a[i] << std::endl;
		std::cout << "c:\t" << c[i] << std::endl;
	}

	try {
		c[-3] = 'o';
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete [] mirror;
}