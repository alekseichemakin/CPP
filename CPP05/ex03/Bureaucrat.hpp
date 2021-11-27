

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

class Form;
class Bureaucrat;

#include <iostream>
#include "Form.hpp"

class Bureaucrat{
public:
	Bureaucrat() {};
	~Bureaucrat() {};
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	void signForm(Form &obj);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception{
	public:
		GradeTooHighException(){};
		virtual const char* what() const throw () {return ("Grade too high");};
	};
	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException(){};
		virtual const char* what() const throw () {return ("Grade too low");};
	};
private:
	int _Grade;
	const std::string _Name;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif //CPP05_BUREAUCRAT_HPP
