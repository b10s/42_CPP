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


// to test:
// make && echo "ADD\na\na\nADD\nb\nb\nSEARCH\nEXIT\n" | ./a.out


// TODO: polish Makefile - binary name, all needed targets, no relink

int main() {
	PhoneBook pb;
	std::string cmd;

	std::cout << "Welcome to awesome Phone Book!" << std::endl;

	while (true) {
		std::cout << std::endl << "Please enter command (ADD, SEARCH, EXIT):" << std::endl;
		getline(std::cin, cmd);
		//TODO: to upper


		//compare to three predefined commands
		if (cmd == "ADD") {
			std::cout << "DEBUG: command was " << cmd << std::endl;

			// ask for additional input
			// TODO: do not allow empty input (ask to enter once more or propose stop entering)
			// Q: what is the length of the input?
			pb.Add();
		} else if (cmd == "SEARCH") {
			std::cout << "DEBUG: command was " << cmd << std::endl;

			pb.Search();
		} else if (cmd == "EXIT") {
			std::cout << "DEBUG: command was " << cmd << std::endl;
			exit(0);
		} else {
			std::cout << "Unknown command. Allowed commands are: ADD, SEARCH, EXIT. Try again." << std::endl;
		}
	}

	// examples //
	std::string foo = "aaa";
	std::cout << std::setfill('.') << std::setw(10);
	std::cout << 123 << std::endl;
	// read about this left and rigth
	// Q: why right doesn't work?
	std::cout.flags(std::ios::left);
	std::cout << 123 << std::endl;
	//pb.Add("aa");
	//pb.Add("bb");
	//pb.Add("cc");
	//pb.Add("dd");
	//std::cout << 123 << std::endl;
	// examples ^^ //

}
