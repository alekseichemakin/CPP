//
// Created by lexa on 09.09.2021.
//

#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP

class Bureaucrat;
class Form;

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
	Form(const std::string &name, const int &SignGrade, const int &ExecGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);

	std::string getName() const {return _Name;};
	int getSignGrade() const {return _Sign_Grade;};
	int getExecGrade() const {return _Exec_Grade;};
	bool getIsSigned() const {return _Is_Signed;};
	void setIsSigned(const bool &val) {this->_Is_Signed = val;};
	void beSigned(const Bureaucrat &man);

	class GradeTooHighException : public std::exception{
	public:
		GradeTooHighException(){};
		virtual const char* what() const throw() {return ("Grade too high");};
	};
	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException(){};
		virtual const char* what() const throw() {return ("Grade too low");};
	};

private:
	const std::string _Name;
	const int _Sign_Grade;
	const int _Exec_Grade;
	bool _Is_Signed;
};

std::ostream& operator<<(std::ostream &os, Form const &rhs);

#endif //CPP05_FORM_HPP
