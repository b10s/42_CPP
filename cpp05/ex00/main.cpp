#include "./Bureaucrat.hpp"
#include <iostream>

// TODO: check gh for example of exception class

int main() {
	std::cout << std::endl << "<subject tests>" << std::endl;

	Bureaucrat b;
	Bureaucrat c;
	Bureaucrat d("asdsadsa", 170);

	c = b;

	return 0;
}


