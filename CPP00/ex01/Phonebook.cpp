//
// Created by Maya Queen on 9/21/21.
//

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	std::cout << "It's my phone book, you can:" << std::endl;
	std::cout << "\t•\"ADD\" contact" << std::endl;
	std::cout << "\t•\"SEARCH\" contact" << std::endl;
	std::cout << "\t•\"EXIT\"" << std::endl;
}

Phonebook::~Phonebook() {
	std::cout << "BYE!" << std::endl;
}

void Phonebook::add_contact() {
	std::string buf;

	info[0].setClear(false);
	std::cout << "Type first name: ";
	getline(std::cin>>std::ws, buf);
	if (buf.length() == 0)
		buf = "No info";
	info[0].setName(buf);
	std::cout << "Type second name: ";
	getline(std::cin, buf);
	if (buf.length() == 0)
		buf = "No info";
	info[0].setLastName(buf);
	std::cout << "Type nickname: ";
	getline(std::cin, buf);
	if (buf.length() == 0)
		buf = "No info";
	info[0].setNickname(buf);
	std::cout << "Type phone number: ";
	getline(std::cin, buf);
	if (buf.length() == 0)
		buf = "No info";
	info[0].setPhoneNumber(buf);
	std::cout << "Type darkest secret: ";
	getline(std::cin, buf);
	if (buf.length() == 0)
		buf = "No info";
	info[0].setSecret(buf);
}

void Phonebook::move_contact() {
	std::string	buf;
	int		i = 0;

	if (!info[7].getClear())
	{
		std::cout << "The Phonebook is full, the last contact will be deleted" << std::endl;
		i = 7;
	}
	else
		while (!info[i].getClear() && i < 7)
			i++;
		while (i > 0)
		{
			info[i] = info[i - 1];
			i--;
		}
}

void Phonebook::search_contact() {
	std::string id;
	int n = 0;

	if (info[0].getClear())
		std::cout << "No contact yet, use function \"ADD\"" << std::endl;
	else
	{
		for (int i = 0; !info[i].getClear() && i < 8; i++)
			info[i].printInfo(i);
		std::cout << "For additional info type contact id: ";
		getline(std::cin >> std::ws, id);
		for (int i = 0; id[i]; i++)
			if (!isdigit(id[i])) {
				std::cout << "error: invalid argument" << std::endl;
				return;
			}
		while (!info[n].getClear() && n < 8) {
			if (stoi(id) == n + 1) {
				info[n].printAddInfo();
				break;
			}
			n++;
		}
		if (info[n].getClear() || n >= 8)
			std::cout << "Error: wrong id" << std::endl;
	}
}

void Phonebook::add() {
	if (info[0].getClear())
		add_contact();
	else
	{
		move_contact();
		add_contact();
	}
}