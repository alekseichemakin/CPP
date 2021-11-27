//
// Created by lexa on 29.08.2021.
//

#ifndef CPP02_FIXED_HPP
#define CPP02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	Fixed & operator = (const Fixed &other);
	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
private:
	int _value;
	static const int _fractional_bits = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed const &rhs);
#endif //CPP02_FIXED_HPP
