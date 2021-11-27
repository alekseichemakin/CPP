#include "Bureaucrat.hpp"

int main(){
	Bureaucrat *a;

	try {
		std::cout << "Try create Bureaucrat..." << std::endl;
		a = new Bureaucrat("a", 151);
		std::cout << a << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what();
	}
	std::cout << "\nTry create  normal Bureaucrat..." << std::endl;
	a = new Bureaucrat("a", 1);
	std::cout << *a << std::endl;
	try {
		std::cout << "\nTry  inc Bureaucrat..." << std::endl;
		a->incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << "Error: can't inc: grade = " << a->getGrade() << " " << e
		.what();
	}

	std::cout << "\nTry dec Bureaucrat..." << std::endl;
	int i;
	try {
		for (i = 0; i < 200; ++i) {
			a->decGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cout << "grade = " << a->getGrade() << " " << e.what();
	}
	std::cout << *a <<  std::endl;
	delete a;
}