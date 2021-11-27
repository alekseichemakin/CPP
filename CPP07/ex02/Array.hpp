#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <iostream>

template<class T>
class Array{
public:
	Array() : _lenght(0), _data(nullptr) { };

	virtual ~Array() { delete [] _data; };

	Array(const Array<T> &other) {
		_lenght = other.size();
		_data = new T[_lenght];
		for (int i = 0; i < other.size(); ++i) {
			_data[i] = other[i];
		}
	};

	Array<T> &operator = (const Array<T> &other){
		if (this == &other)
			return *this;
		delete [] _data;
		this->_lenght = other.size();
		this->_data = new T[_lenght];
		for (int i = 0; i < other.size(); ++i) {
			this->_data[i] = other[i];
		}
		return *this;
	};

	Array(unsigned int n) : _lenght(n){
		_data = new T[_lenght];
		for (int i = 0; i < _lenght; ++i) {
			_data[i] = 0;
		}
	};

	T& operator[](const int index){
		if (index < 0 || index >= _lenght)
			throw std::runtime_error("operator[]: invalid index");
		return _data[index];
	};

	const T& operator[](const int index) const {
		if (index < 0 || index >= _lenght)
			throw std::runtime_error("operator[]: invalid index");
		return _data[index];
	};

	int size() const { return _lenght; };

private:
	unsigned int	_lenght;
	T	*_data;
};

#endif //CPP07_ARRAY_HPP
