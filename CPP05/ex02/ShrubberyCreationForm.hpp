//
// Created by lexa on 09.09.2021.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm() {};
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	std::string getTarget() const {return _Target;};
	void execute(Bureaucrat const & executor) const;
private:
	std::string _Target;
};


#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
