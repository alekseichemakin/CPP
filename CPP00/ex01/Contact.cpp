#include <utility>

#include "Contact.hpp"

Contact::Contact()
{
    this->_clear = true;
}

Contact::~Contact() {
}

Contact & Contact::operator = (const Contact &other)
{
	this->_first_name = other._first_name;
	this->_last_name = other._last_name;
	this->_nickname = other._nickname;
	this->_phone_number = other._phone_number;
	this->_secret = other._secret;
	this->_clear = other._clear;
	return (*this);
}

void	Contact::setClear(bool n) {
	this->_clear = n;
}

bool	Contact::getClear() const {
	return (this->_clear);
}

void	Contact::setName(std::string n) {
	this->_first_name = std::move(n);
}

void	Contact::setLastName (std::string n) {
	this->_last_name = std::move(n);
}

void	Contact::setNickname (std::string n) {
	this->_nickname = std::move(n);
}

void	Contact::setPhoneNumber (std::string n) {
	this->_phone_number = std::move(n);
}

void	Contact::setSecret (std::string n) {
	this->_secret = std::move(n);
}

std::string	Contact::getName() const {
	return (this->_first_name);
}

std::string	Contact::getLastName() const {
	return (this->_last_name);
}

std::string	Contact::getNickname() const {
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber() const {
	return (this->_phone_number);
}

std::string	Contact::getSecret() const {
	return (this->_secret);
}

void	helper(std::string str)
{
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
	else
	{
		for (int i = 0; i < 10 - str.length(); i++)
			std::cout << ' ';
		std::cout << str;
	}
}

void	Contact::printInfo(int id)
{
	for (int i = 0; i < 9; i++)
		std::cout << ' ';
	std::cout << id + 1 << " | ";
	helper(this->_first_name);
	std::cout << " | ";
	helper(this->_last_name);
	std::cout << " | ";
	helper(this->_nickname);
	std::cout << std::endl;
}

void	Contact::printAddInfo()
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}