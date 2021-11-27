#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
	mutantstack<int> mstack;
	std::cout << "Pushing 4 new elements on the stack..." << std::endl;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top element: " << mstack.top() << std::endl;

	std::cout << "\nPush else..." << std::endl;
	mstack.push(737);
	mstack.push(0);
	std::cout << "Size: " << mstack.size() << std::endl;

	std::cout << "Top element: " << mstack.top() << std::endl;
	std::cout << "\nPop last element..." << std::endl;
	mstack.pop();
	std::cout << "Top element: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	std::cout << "\nCreate iterators.."<< std::endl;
	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	std::cout << "Begin iterator: " << *it << std::endl;
	++it;
	std::cout << "inc begin iterator: " << *it << std::endl;
	--it;
	std::cout << "dec begin iterator: " << *it << std::endl;

	std::cout << "All sta" << *it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "top: " << s.top() << std::endl;
	return 0;
}