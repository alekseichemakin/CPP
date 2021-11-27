#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main(){
	Bureaucrat *a;
	Form *b;

	try {
		b = new ShrubberyCreationForm("test");
		a = new Bureaucrat("a", b->getSignGrade() + 1);
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a->signForm(*b);
	a->executeForm(*b);
	try {
		while (a->getGrade() > b->getSignGrade())
			a->incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a->signForm(*b);

	a->executeForm(*b);
	try {
		while (a->getGrade() > b->getExecGrade())
			a->incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a->executeForm(*b);
	std::cout << *a << std::endl;
	std::cout << *b << std::endl;
	delete b;
	std::cout << "\n=============================================================\n" << std::endl;
	b = new RobotomyRequestForm("Tramp");
	std::cout << *b << std::endl;
	a->signForm(*b);
	a->executeForm(*b);
	try {
		while (a->getGrade() > b->getExecGrade())
			a->incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a->signForm(*b);
	std::cout << GREEN;
	a->executeForm(*b);
	std::cout << RESET;
	delete b;
	std::cout << "\n=============================================================\n" << std::endl;
	b = new PresidentialPardonForm("Baiden");
	std::cout << *b << std::endl;
	a->signForm(*b);
	a->executeForm(*b);
	try {
		while (a->getGrade() > b->getExecGrade())
			a->incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a->signForm(*b);
	std::cout << GREEN;
	a->executeForm(*b);
	std::cout << RESET;
	delete a;
	delete b;
}