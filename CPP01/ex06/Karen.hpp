#ifndef CPP01_KAREN_HPP
#define CPP01_KAREN_HPP

#include <iostream>

class Karen {
public:
	void filter(std::string level);
	void complain( std::string level );
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};


#endif //CPP01_KAREN_HPP
