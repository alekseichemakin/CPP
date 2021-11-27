#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(){
	Bureaucrat *a;
	Form *b;

	try {
		b = Intern::makeForm("shrubbery reation", "test");
		a = new Bureaucrat("a", b->getSignGrade() + 1);
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		b = Intern::makeForm("shrubbery creation", "test");
		a = new Bureaucrat("a", b->getSignGrade() + 1);
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
	a->executeForm(*b);
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
	a->executeForm(*b);
	delete a;
	delete b;
}