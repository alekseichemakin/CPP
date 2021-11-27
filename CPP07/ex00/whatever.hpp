//
// Created by lexa on 24.09.2021.
//

#ifndef _CPP07_WHATEVER_HPP
#define _CPP07_WHATEVER_HPP

template <typename T>
void swap(T &a, T &b){
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
const T& min(const T &a, const T &b){
	if (a == b)
		return b;
	return a < b ? a : b;
}

template <typename T>
const T& max(const T &a, const T &b){
	if (a == b)
		return b;
	return a > b ? a : b;
}

#endif //_CPP07_WHATEVER_HPP
