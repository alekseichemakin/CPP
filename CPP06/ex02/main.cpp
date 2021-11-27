#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{
public:
	virtual ~Base() {};
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

Base * generate(void){
	srand(static_cast<unsigned int>(time(0)));

	int i = rand()%3;
	std::cout << "i: " << i << std::endl;
	switch (i) {
		case 0: {
			std::cout << "A class created" << std::endl;
			return new A;
		}
		case 1: {
			std::cout << "B class created" << std::endl;
			return new B;
		}
		case 2: {
			std::cout << "C class created" << std::endl;
			return new C;
		}
	}
	return nullptr;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p)){
		std::cout << "is A class" << std::endl;
		return;
	}
	else if (dynamic_cast<B*>(p)){
		std::cout << "is B class" << std::endl;
		return;
	}
	else if (dynamic_cast<C*>(p)){
		std::cout << "is C class" << std::endl;
		return;
	}
}

void identify(Base& p){

	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "is A class" << std::endl;
	}
	catch (std::bad_cast &e) {
	}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "is B class" << std::endl;
	}
	catch (std::bad_cast &e) {
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "is C class" << std::endl;
	}
	catch (std::bad_cast &e) {
	}
}

int main(){
	Base *unknow = generate();
	Base &ptr = *unknow;

	identify(unknow);
	identify(ptr);

	delete unknow;
	return 0;
}