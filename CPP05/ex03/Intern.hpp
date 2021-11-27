//
// Created by lexa on 10.09.2021.
//

#ifndef CPP05_INTERN_HPP
#define CPP05_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern(){};
	~Intern(){};
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	static Form *makeForm(const std::string &form, const std::string &target);
	static Form *makeSC(const std::string &target);
	static Form *makeRR(const std::string &target);
	static Form *makePP(const std::string &target);
	class NoSuchFormException : public std::exception{
	public:
		virtual const char* what() const throw () {return ("No such form");};
	};
};


#endif //CPP05_INTERN_HPP
