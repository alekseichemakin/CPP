//
// Created by lexa on 27.09.2021.
//

#include "span.hpp"

void span::addNumber(const int n) {
	if (_data.size() == _n)
		throw std::runtime_error("Error: span: memory is full");
	_data.push_back(n);
}

void span::addNumber(const std::vector<int> n) {
	if (_data.size() == _n)
		throw std::runtime_error("Error: span: memory is full");
	unsigned int end = n.size();
	if (_n - _data.size() < n.size()) {
		end = _n - _data.size();
		std::cout << "Warning: span::addNumber: not all numbers will be add" << std::endl;
	}
	_data.insert(_data.end(), n.begin(), n.begin() + end);
}

int span::longestSpan() {
	if (_n == 0)
		throw std::runtime_error("Error: span: it should be more then 0 element");
	if (_n == 1)
		return *_data.begin();
	return (static_cast<int>(*std::max_element(_data.begin(), _data.end()) -
							 *std::min_element(_data.begin(), _data.end())));
}

int span::shortestSpan() {
	if (_n == 0 || _data.size() == 0)
		throw std::runtime_error("Error: span: it should be more then 0 element");
	if (_n == 1 || _data.size() == 1)
		return *_data.begin();

	std::sort(_data.begin(), _data.end());
	int diff = abs(_data[1]) - abs(_data[0]);

	std::vector<int>::iterator it;
	for (it = _data.begin() + 1; it != _data.end(); ++it) {
		if (abs(*it) - abs(*(it - 1)) < diff && abs(*it) - abs(*(it - 1)) != 0)
			diff = abs(*it) - abs(*(it-1));
	}
	return diff;
}