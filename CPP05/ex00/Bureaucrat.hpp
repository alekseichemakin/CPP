

#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
public:
	Bureaucrat() {};
	virtual ~Bureaucrat() {};
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();
	class GradeTooHighException : public std::exception{
	public:
		GradeTooHighException(){};
		virtual const char* what() const throw() {return ("Grade too high\n");};
	};
	class GradeTooLowException : public std::exception{
	public:
		GradeTooLowException(){};
		virtual const char* what() const throw() {return ("Grade too low\n");};
	};
private:
	int _Grade;
	std::string _Name;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat const &rhs);

#endif //CPP05_BUREAUCRAT_HPP
