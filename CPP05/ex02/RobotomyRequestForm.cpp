//
// Created by lexa on 09.09.2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
		: Form("RobotomyRequestForm", 72, 45), _Target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), _Target(other._Target){
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	Form::operator=(other);
	this->_Target = other._Target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);

	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << "SUCCESS! " << this->_Target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomized failed. Try again." << std::endl;
}