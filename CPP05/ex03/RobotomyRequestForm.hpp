//
// Created by lexa on 09.09.2021.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm() {};
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

	std::string getTarget() const {return _Target;};
	void execute(Bureaucrat const & executor) const;
private:
	std::string _Target;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
