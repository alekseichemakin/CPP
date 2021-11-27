//
// Created by lexa on 27.09.2021.
//

#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

class span {
public:
	span() : _n(0) { };
	~span() { };
	span(const int n) : _n(n) { };
	void addNumber(const int n);
	void addNumber(const std::vector<int> n);
	int shortestSpan();
	int longestSpan();
private:
	unsigned int _n;
	std::vector<int> _data;
};


#endif //CPP08_SPAN_HPP
