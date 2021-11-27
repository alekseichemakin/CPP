//
// Created by lexa on 09.09.2021.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCreationForm", 145, 137), _Target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), _Target(other._Target){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	Form::operator=(other);
	this->_Target = other._Target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);

	std::ofstream file;
	std::string fname = _Target + "_shrubbery.txt";
	try {
		file.open(fname);
	}
	catch (std::exception &e) {
		 std::cout << e.what() << std::endl;
	}
	file << "       .     .  .      +     .      .          .\n"
			"     .       .      .     #       .           .\n"
			"        .      .         ###            .      .      .\n"
			"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
			"          .      . \"####\"###\"####\"  .\n"
			"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
			"  .             \"#########\"#########\"        .        .\n"
			"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
			"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
			"                .\"##\"#####\"#####\"##\"           .      .\n"
			"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
			"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
			"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
			"            .     \"      000      \"    .     .\n"
			"       .         .   .   000     .        .       .\n"
			".. .. ..................O000O........................ ......" << std::endl;
}