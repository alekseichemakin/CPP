//
// Created by Maya Queen on 9/23/21.
//

#include "Convert.hpp"


int check_alpha(std::string &str){
	if (str.size() == 1 && isprint(str[0]))
		return static_cast<int>(str[0]);
	return 0;
}

Convert &Convert::operator=(const Convert &other) {
	if (this == &other)
		return *this;
	this->_str = other._str;
	return *this;
}

void Convert::to_char() {
	int c;

	if (check_alpha(_str))
		c = check_alpha(_str);
	else{
		try {
			c = stoi(_str, nullptr, 10);
		}
		catch(std::invalid_argument &e){
			std::cerr << "char: impossible" << std::endl;
			return;
		}
		catch(std::out_of_range &e){
			std::cerr << "char: impossible" << std::endl;
			return;
		}
		if (c < -128 || c > 127){
			std::cerr << "char: impossible" << std::endl;
			return;
		}
		if (!isprint(c)) {
			std::cout << "char: Non displayable" << std::endl;
			return;
		}
	}
	std::cout << "char: " << static_cast<char>(c) << std::endl;
}

void Convert::to_int() {
	int i;

	if (check_alpha(_str))
		i = check_alpha(_str);
	else {
		try {
			i = stoi(_str, nullptr, 10);
		}
		catch(std::invalid_argument &e){
			std::cerr << "int: impossible" << std::endl;
			return;
		}
		catch(std::out_of_range &e){
			std::cerr << "int: impossible" << std::endl;
			return;
		}
	}
	std::cout << "int: " << i << std::endl;
}

void Convert::to_float() {
	float f;

	if (check_alpha(_str))
		f = static_cast<float>(check_alpha(_str));
	else {
		try {
			f = stof(_str, nullptr);
		}
		catch(std::invalid_argument &e){
			std::cerr << "float: nanf" << std::endl;
			return;
		}
		catch(std::out_of_range &e){
			std::cerr << "int: impossible" << std::endl;
			return;
		}
	}
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
}

void Convert::to_double() {
	double d;

	if (check_alpha(_str))
		d = static_cast<double>(check_alpha(_str));
	else {
		try {
			d = stod(_str, nullptr);
		}
		catch(std::invalid_argument &e){
			std::cerr << "double: nan" << std::endl;
			return;
		}
		catch(std::out_of_range &e){
			std::cerr << "double: impossible" << std::endl;
			return;
		}
	}
	std::cout << "double: " << d << std::endl;
}
