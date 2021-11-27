//
// Created by lexa on 09.09.2021.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
		: Form("PresidentialPardonForm", 25, 5), _Target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), _Target(other._Target){
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	Form::operator=(other);
	this->_Target = other._Target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << _Target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}