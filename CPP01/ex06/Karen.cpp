#include "Karen.hpp"

void Karen::debug() {
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n" << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money.\n"
				 "You don’t put enough!\nIf you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been "
				 "coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error() {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::complain(std::string level) {
	void (Karen::*options [4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(word[i]))
		{
			(this->*options[i])();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::filter(std::string level) {
	std::string word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (!level.compare(word[i]))
			break;
	}
	switch (i) {
		case 0:
			Karen::complain("DEBUG");
		case 1:
			Karen::complain("INFO");
		case 2:
			Karen::complain("WARNING");
		case 3:
			Karen::complain("ERROR");
			break;
		default:
			Karen::complain("DEFAULT");
	}
}