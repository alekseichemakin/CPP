#include <iostream>

using namespace std;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "string address:\t" << &str << endl;
	cout << "strPTR address:\t" << stringPTR << endl;
	cout << "strREF address:\t" << &stringREF << endl;

	cout << "string:\t" << str << endl;
	cout << "strPTR:\t" << *stringPTR << endl;
	cout << "strREF:\t" << stringREF << endl;
}