#include <stdio.h>
#include "./PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int main() {
	PhoneBook pb;
	std::cout << "Welcome to awesome Phone Book!" << std::endl;
	while (true) {
		std::cout << std::endl << "Please enter command (ADD, SEARCH, EXIT):" << std::endl;
		// ask for command
		std::string cmd;
		getline(std::cin, cmd);
		//std::cout << "command was " << cmd << std::endl;

		//TODO: to upper


		//compare to three predefined commands
		if (cmd == "ADD") {
			std::cout << "command was " << cmd << std::endl;
			// ask for additional input
			// TODO: do not allow empty input (ask to enter once more or propose stop entering)
			// Q: what is the length of the input?
			pb.Add();
		} else if (cmd == "SEARCH") {
			std::cout << "command was " << cmd << std::endl;
		} else if (cmd == "EXIT") {
			std::cout << "command was " << cmd << std::endl;
		} else {
			std::cout << "Unknown command. Allowed commands are: ADD, SEARCH, EXIT." << std::endl;
		}
	}

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
}
