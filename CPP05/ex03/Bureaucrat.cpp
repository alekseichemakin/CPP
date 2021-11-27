//
// Created by lexa on 07.09.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _Name(name) {
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _Name(other._Name){
	if (other._Grade < 1)
		throw (GradeTooHighException());
	else if (other._Grade > 150)
		throw (GradeTooLowException());
	this->_Grade = other._Grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other) {
	if (other._Grade < 1)
		throw (GradeTooHighException());
	else if (other._Grade > 150)
		throw (GradeTooLowException());
	this->_Grade = other._Grade;
	return *this;
}
std::string Bureaucrat::getName() const {return this->_Name;}

int Bureaucrat::getGrade() const {return this->_Grade;}

void Bureaucrat::decGrade() {
	if (_Grade == 150)
		throw (GradeTooLowException());
	_Grade++;
}

void Bureaucrat::incGrade() {
	if (_Grade == 1)
		throw (GradeTooHighException());
	_Grade--;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &rhs){
	os << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">.";
	return os;
}

void Bureaucrat::signForm(Form &obj) {
	try {
		obj.beSigned(*this);
		std::cout << "<" << this->_Name << "> signs <" << obj.getName() << ">" << std::endl;
	}
	catch (std::exception & e){
		std::cout << "<" << this->_Name << "> cannot sign <" << obj.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {
	try {
		form.execute(*this);
		std::cout << "<" << this->_Name << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & e){
		std::cout << "<" << this->_Name << "> cannot execute <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}
