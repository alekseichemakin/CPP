//
// Created by lexa on 09.09.2021.
//

#include "Form.hpp"

Form::Form(const std::string &name, const int &SignGrade, const int &ExecGrade)
: _Name(name), _Sign_Grade(SignGrade), _Exec_Grade(ExecGrade)
{
	_Is_Signed = false;
	if (_Sign_Grade < 1 || _Exec_Grade < 1)
		throw (GradeTooHighException());
	else if (_Sign_Grade > 150 || _Exec_Grade > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &other) :
_Name(other._Name), _Exec_Grade(other._Exec_Grade), _Sign_Grade(other._Sign_Grade)
{
	this->_Is_Signed = other._Is_Signed;
}

Form & Form::operator=(const Form &other) {
	this->_Is_Signed = other._Is_Signed;
	return *this;
}

void Form::beSigned(const Bureaucrat &man) {
	if (man.getGrade() > this->_Sign_Grade)
		throw (GradeTooLowException());
	else
		this->_Is_Signed = true;
}

std::ostream& operator<<(std::ostream &os, Form const &rhs){
	os << "<" << rhs.getName() << "> Form ";
	if (rhs.getIsSigned())
		os << "is signed. ";
	else
		os << "is not signed. ";
	os << "Sign grade = " << rhs.getSignGrade() << ", Exec grade = " << rhs.getExecGrade() << ".";
	return os;
}

void Form::execute(const Bureaucrat &executor) const {
	if (!this->_Is_Signed)
		throw (NotSignedException());
	if (executor.getGrade() > this->_Exec_Grade)
		throw (GradeTooLowException());
}