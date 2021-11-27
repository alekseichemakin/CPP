#ifndef CPP00_PHONEBOOK_HPP
#define CPP00_PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
public:
	Phonebook();
	~Phonebook();
	void add();
	void add_contact();
	void move_contact();
	void search_contact();
private:
	Contact info[8];
};


#endif //CPP00_PHONEBOOK_HPP
