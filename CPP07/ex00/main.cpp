#include <iostream>
#include "whatever.hpp"

class Ex{
public:
	Ex() : _n(0) {};
	~Ex(){};
	Ex(const int &n) : _n(n) {};
	int get_n() const {return _n;};
	const Ex& operator =(const Ex &o) { this->_n = o._n; return *this; };
private:
	int _n;
};
bool operator== (const Ex &c1, const Ex &c2) { return c1.get_n() == c2.get_n(); };
bool operator> (const Ex &c1, const Ex &c2)	{ return c1.get_n() > c2.get_n(); };
bool operator< (const Ex &c1, const Ex &c2)	{ return c1.get_n() < c2.get_n(); };

int main(){
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n========== 2 test =============" << std::endl;

	Ex one(2);
	Ex two(1);

	std::cout << "one = " <<  one.get_n() << ", two = " << two.get_n() << std::endl;
	std::cout << "*SWAP*" << std::endl;
	::swap(one, two);
	std::cout << "one = " <<  one.get_n() << ", two = " << two.get_n() << std::endl;
	std::cout << "min( one, two ) = " << ::min( one, two ).get_n() << std::endl;
	std::cout << "max( one, two ) = " << ::max( one, two ).get_n() << std::endl;
	return 0;
}

