#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	Bureaucrat *a;
	Form *b;

	try {
		a = new Bureaucrat("a", 30);
		b = new Form("b", 20, 30);
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTry sign form..." << std::endl;
	a->signForm(*b);
	std::cout << "\nImproving grade..." << std::endl;
	try {
		while (a->getGrade() > 20)
			a->incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *a << std::endl;

	std::cout << "\nTry sign form..." << std::endl;
	a->signForm(*b);
	std::cout << *b << std::endl;
	delete a;
	delete b;
}