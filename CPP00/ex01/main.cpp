#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	std::string	com;
	Phonebook book;

	std::cout << ">";
	while (std::cin >> com)
    {
        if (com == "ADD")
			book.add();
		else if (com == "SEARCH")
			book.search_contact();
		else if (com == "EXIT")
			exit(0);
        else
        	std::cout << com << ": no such command" << std::endl;
        std::cout << ">";
    }
    return (0);
}