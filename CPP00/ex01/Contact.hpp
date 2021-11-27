#ifndef CPP00_CONTACT_HPP
#define CPP00_CONTACT_HPP

#include <iostream>

class Contact {
public:
	Contact();
	~Contact();
	Contact &operator=(const Contact &other);
	bool getClear(void) const;
	void setClear(bool n);
	std::string getName(void) const;
	void setName(std::string n);
	void setLastName(std::string n);
	std::string getLastName(void) const;
	void setNickname(std::string n);
	std::string getNickname(void) const;
	void setPhoneNumber(std::string n);
	std::string getPhoneNumber(void) const;
	void setSecret(std::string n);
	std::string getSecret(void) const;
	void printInfo(int id);
	void	printAddInfo();

private:
	bool _clear;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _secret;
};

#endif //CPP00_CONTACT_HPP
