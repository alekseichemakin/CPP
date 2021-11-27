#include "Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->_value = other.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(other._value);
	return (*this);
}

int Fixed::getRawBits() const {
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

float Fixed::toFloat() const {
	return (float ( (float )this->getRawBits() / (1 << this->_fractional_bits)));
}

int Fixed::toInt() const {
	return (roundf(this->getRawBits())  / (1 << this->_fractional_bits));
}

std::ostream & operator<<(std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return (os);
}
