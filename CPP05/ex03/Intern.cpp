//
// Created by lexa on 10.09.2021.
//

#include "Intern.hpp"

Intern::Intern(const Intern &other) {(void )other;}

Intern & Intern::operator=(const Intern &other) {(void )other; return *this;}

Form * Intern::makeSC(const std::string &target) {return new ShrubberyCreationForm(target);}

Form * Intern::makePP(const std::string &target) {return new PresidentialPardonForm(target);}

Form * Intern::makeRR(const std::string &target) {return new RobotomyRequestForm(target);}

Form * Intern::makeForm(const std::string &form, const std::string &target) {
	std::string forms[3] = {"shrubbery creation", "robotomy request",
							"presidential pardon"};
	Form* (*fncPtr[3])(const std::string&) = {&makeSC, &makeRR, &makePP};

	for (int i = 0; i < 3; i++) {
		if (forms[i] == form) {
			std::cout << "Intern creates <" << form << ">" << std::endl;
			return fncPtr[i](target);
		}
	}
	std::cout << "Error: \"" << form << "\" no such form" << std::endl;
	throw (NoSuchFormException());
}