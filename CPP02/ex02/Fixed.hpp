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
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	Fixed operator + (const Fixed &other) const;
	Fixed operator - (const Fixed &other) const;
	Fixed operator * (const Fixed &other) const;
	Fixed operator / (const Fixed &other) const;
	Fixed &operator ++ ();
	Fixed &operator -- ();
	Fixed operator ++ (int val);
	Fixed operator -- (int val);
	static 	const Fixed &min(const Fixed &a, const Fixed &b);
	static 	Fixed &min(Fixed &a, Fixed &b);
	static 	const Fixed &max(const Fixed &a, const Fixed &b);
	static 	Fixed &max(Fixed &a, Fixed &b);
private:
	int _value;
	static const int _fractional_bits = 8;
};


std::ostream& operator<<(std::ostream &os, Fixed const &rhs);
#endif //CPP02_FIXED_HPP
