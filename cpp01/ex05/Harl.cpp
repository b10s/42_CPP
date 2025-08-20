#include "./Harl.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

void Harl::complain(std::string level) {
	int idx = atoi(level.c_str()) % 4;

	void (Harl::*MemberFnPtr[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	(this->*MemberFnPtr[idx])();
}

void Harl::debug(void) {
	std::cout << std::left << std::setw(10) << "DEBUG:";
	std::cout << "hello" << std::endl;
}

void Harl::info(void) {
	std::cout << std::left << std::setw(10) << "INFO:";
	std::cout << "hello" << std::endl;
}

void Harl::warning(void) {
	std::cout << std::left << std::setw(10) << "WARNING:";
	std::cout << "hello" << std::endl;
}

void Harl::error(void) {
	std::cout << std::left << std::setw(10) << "ERROR:";
	std::cout << "hello" << std::endl;
}

