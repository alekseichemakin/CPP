//
// Created by Maya Queen on 9/28/21.
//

#include "mutantstack.hpp"

template<typename T>
mutantstack<T>::mutantstack(const mutantstack<T> &other) : std::stack<T>(other) {
}

template<typename T>
mutantstack<T>& mutantstack<T>::operator=(const mutantstack<T &> &other) {
	if (this == &other)
		return *this;
	this = *other;
	return *this;
}

template<typename T>
typename std::stack<T>::container_type::iterator mutantstack<T>::begin() {
	return this->c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator mutantstack<T>::end() {
	return this->c.end();
}