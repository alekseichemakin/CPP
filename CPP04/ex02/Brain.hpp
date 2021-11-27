//
// Created by lexa on 05.09.2021.
//

#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	virtual ~Brain();
	std::string getIdea(int n);
	void  setIdea(int n, const std::string& idea);
private:
	std::string ideas[100];
};


#endif //CPP04_BRAIN_HPP
