#include "Fixed.hpp"


Fixed::Fixed() {
	this->_value = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int n) {
	this->_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n) {
	this->_value = (int)roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &other) {
	this->_value = other.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &other) {
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
	return ((int )roundf(this->getRawBits())  / (1 << this->_fractional_bits));
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->toFloat() != other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->toFloat() <= other.toFloat());
}

Fixed Fixed::operator+(const Fixed &other) const {
	float temp;

	temp = this->toFloat() + other.toFloat();
	Fixed n(temp);
	return (n);
}

Fixed Fixed::operator-(const Fixed &other) const {
	float temp;

	temp = this->toFloat() - other.toFloat();
	Fixed n(temp);
	return (n);
}

Fixed Fixed::operator*(const Fixed &other) const {
	float temp;

	temp = this->toFloat() * other.toFloat();
	Fixed n(temp);
	return (n);
}

Fixed Fixed::operator/(const Fixed &other) const {
	float temp;

	temp = this->toFloat() / other.toFloat();
	Fixed n(temp);
	return (n);
}

Fixed & Fixed::operator++() {
	++this->_value;
	return (*this);
}

Fixed & Fixed::operator--() {
	float n = this->toFloat() - 1;

	this->_value = (int)roundf(n * (1 << this->_fractional_bits));
	return (*this);
}

Fixed Fixed::operator++(int val) {
	Fixed temp(*this);

	++this->_value;
	return (temp);
}

Fixed Fixed::operator--(int val) {
	Fixed temp(*this);
	float n = this->toFloat() - 1;

	this->_value = (int)roundf(n * (1 << this->_fractional_bits));
	return (temp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	if (a < b)
		return (b);
	else
		return (a);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (b);
	else
		return (a);
}

std::ostream & operator<<(std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return (os);
}
