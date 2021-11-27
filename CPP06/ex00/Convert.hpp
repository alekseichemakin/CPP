//
// Created by Maya Queen on 9/23/21.
//

#ifndef CPP06_CONVERT_HPP
#define CPP06_CONVERT_HPP

#include <iostream>
#include <iomanip>

class Convert {
public:
	Convert() {};
	virtual ~Convert() {};
	Convert(const std::string &str) : _str(str) {};
	Convert(const Convert &other) { this->_str = other._str; };
	Convert &operator =(const Convert &other);

	void to_char();
	void to_int();
	void to_double();
	void to_float();
private:
	std::string _str;
};


#endif //CPP06_CONVERT_HPP
