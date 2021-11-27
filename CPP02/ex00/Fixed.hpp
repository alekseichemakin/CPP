//
// Created by lexa on 29.08.2021.
//

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed & operator = (const Fixed &other);
	int getRawBits() const;
	void setRawBits( int const raw );
private:
	int _value;
	static const int _fractional_bits = 8;
};


#endif //CPP02_FIXED_HPP
