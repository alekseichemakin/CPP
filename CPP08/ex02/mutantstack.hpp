//
// Created by Maya Queen on 9/28/21.
//

#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class mutantstack : public std::stack<T>{
public:
	mutantstack() {};
	virtual ~mutantstack() {};
	mutantstack(const mutantstack<T> &other);
	mutantstack &operator=(const mutantstack<T&> &other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};


#endif //CPP08_MUTANTSTACK_HPP
