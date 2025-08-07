#include "./PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() {
	this->next_idx = 0;
	this->full = 0;
}

// Q: why I can't use cin to get line? Instead I have to use getline

void PhoneBook::Add() {
	std::string firstName;
	std::string lastName;

	std::cout << "Please enter first name, last name, .. . All fields must be not empty." << std::endl;

	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	if (firstName.empty()) {
		std::cout << "First Name can't be empty. Take a break. Try again later." << std::endl;
		return;
	}

	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	if (lastName.empty()) {
		std::cout << "Last Name can't be empty. Take a break. Try again later." << std::endl;
		return;
	}

	Contact c(firstName, lastName);

	this->contacts[this->next_idx] = c;
	this->next_idx++;
	if (this->next_idx >= 8) {
		this->next_idx = 0;
		this->full = 1;
	}
}

// TODO: use resetflags after SEARCH out
// https://cplusplus.com/reference/iomanip/resetiosflags/
void PhoneBook::Search() {
	std::string str;
	int contactCount = 0;
	int i = 0;

	if (this->full == 1) {
		contactCount = 8;
	} else {
		contactCount = this->next_idx;
	}

	if (contactCount == 0) {
		std::cout << "Phone Book is empty." << std::endl; 
		return;
	}
	std::cout << std::right << std::setw(10) << "INDEX";
	std::cout << " | ";

	std::cout << std::right << std::setw(10) << "FIRST NAME";
	std::cout << " | ";

	std::cout << std::right << std::setw(10) << "LAST NAME";
	std::cout << std::endl;

	for (i = 0; i < contactCount; i++) {
		// Q: it is okay to start from 0? :)
		std::cout << std::right << std::setw(10) << i;
		std::cout << " | ";

		// TODO: move it to some func?
		// Q: can it be done using only cout magic?
		str = this->contacts[i].firstName;
		// Q: what diff btw s.size() and s.length()?
		if (str.length() > 10) {
			// TODO: make sure after resize, orig string is not modified!
			//	A: seems like not
			//	std::cout << std::endl << "(" << this->contacts[i].firstName << ")" << std::endl;
			str.resize(9);
			str = str + ".";
		}
		std::cout << std::right << std::setw(10) << str;
		std::cout << " | ";

		str = this->contacts[i].lastName;
		if (str.length() > 10) {
			str.resize(9);
			str = str + ".";
		}
		std::cout << std::right << std::setw(10) << str;
		std::cout << std::endl;

		// TODO: prompt for index (check idx)
		// Q: should I display a secret? check github solutions or ask others
	}

}

