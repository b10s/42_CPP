#include "./Bureaucrat.hpp"
#include <iostream>

// TODO: check gh for example of exception class

int main() {
	std::cout << std::endl << "<subject tests>" << std::endl;

	Bureaucrat b;
	Bureaucrat c;

	c = b;

	// TODO: init B with wrond grade
	//  inc and dec to get exceptions
	try {
		Bureaucrat d("asdsadsa", 170);
	} catch (std::exception & e) {
		//TODO: evaluate exception, print it
		std::cout << "yey" << std::endl;
	}


	//TODO: add tests for inc/dec
	//TODO: check getters
	//TODO: add << overload and add test for it

	return 0;
}

