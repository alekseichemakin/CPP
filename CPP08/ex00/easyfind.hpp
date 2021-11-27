#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <map>

template<typename T>
typename T::iterator easyfind(T &a, int b){
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw std::runtime_error("Not found");
	return it;
}

template<typename T1, typename T2>
typename std::map<T1, T2>::iterator easyfind(std::map<T1, T2> &a, int b){
	typename std::map<T1, T2>::iterator it;
	for (it = a.begin(); it != a.end(); ++it) {
		if (it->first == b)
			break;
	}
	if (it == a.end())
		throw std::runtime_error("Not found");
	return it;
}

template<typename T1, typename T2>
typename std::multimap<T1, T2>::iterator easyfind(std::multimap<T1, T2> &a, int b){
	typename std::multimap<T1, T2>::iterator it;
	for (it = a.begin(); it != a.end(); ++it) {
		if (it->first == b)
			break;
	}
	if (it == a.end())
		throw std::runtime_error("Not found");
	return it;
}

#endif
