//
// Created by lexa on 09.09.2021.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm() {};
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

	std::string getTarget() const {return _Target;};
	void execute(Bureaucrat const & executor) const;
private:
	std::string _Target;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
