#include "./PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

// Q: what if there is two times include?
//		there is protection from it using ifdef; what if not protect? (C and CPP)

// Q: what diff btw endl and \n?

// Q: why cout and << were introduced in CPP?

// Q: why string can't be used in switch in CPP?

// Q: do we have intranet videos?
//		"Don’t forget to watch the intranet videos." in subj

// Q: subj lists the following topics:
//		Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff
// What are Namespaces, initialization lists, static, const?
// Can we use Namespaces? On page 4 it says:
//	"Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42."

// Q: why if I redirect from file to stdin there is inf loop?


int main() {
	PhoneBook pb;
	std::string cmd;

	std::cout << "Welcome to awesome Phone Book!" << std::endl;

	while (true) {
		std::cout << std::endl << "Please enter command (ADD, SEARCH, EXIT):" << std::endl;

		getline(std::cin, cmd);
		if (std::cin.eof()) {
			// Q: can getline return empty string, 0 as return value, but it is not EOF?
			// EOF or something unexpected
			break;
		}
		//Q: cmd to upper?
		if (cmd == "ADD") {
			pb.Add();
		} else if (cmd == "SEARCH") {
			pb.Search();
		} else if (cmd == "EXIT") {
			exit(0);
		} else {
			std::cout << "Unknown command. Allowed commands are: ADD, SEARCH, EXIT. Try again." << std::endl;
		}
	}
}

