#include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << std::left << std::setw(35) << "mem addr of str: " << &str << std::endl;
	std::cout << std::left << std::setw(35) << "mem addrs held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::left << std::setw(35) << "mem addrs held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::left << std::setw(35) << "value of str: " << str << std::endl;
	std::cout << std::left << std::setw(35) << "value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(35) << "value pointed to by stringREF: " << stringREF << std::endl;
}

