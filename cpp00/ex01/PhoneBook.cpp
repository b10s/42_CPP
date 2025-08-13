#include "./PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

PhoneBook::PhoneBook() {
	this->next_idx = 0;
	this->full = 0;
}

// Q: why I can't use cin to get line? Instead I have to use getline

void PhoneBook::Add() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::string errMsg = "Take a break. Drink tea, walk in the park and try again later :)";

	std::cout << "Please enter First Name, Last Name, Nick Name, Phone Number and Darkest Secret." 
		<< std::endl << "All fields must be not empty!" << std::endl;

	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	if (firstName.empty()) {
		std::cout << "First Name can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	if (lastName.empty()) {
		std::cout << "Last Name can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	std::cout << "Nick Name: ";
	std::getline(std::cin, nickName);
	if (nickName.empty()) {
		std::cout << "Nick Name can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	if (phoneNumber.empty()) {
		std::cout << "Phone Number can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	//Q: is there a way to mask input using std streams magic?

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	if (darkestSecret.empty()) {
		std::cout << "Darkest Secret can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	Contact c(firstName, lastName, nickName, phoneNumber, darkestSecret);

	this->contacts[this->next_idx] = c;
	this->next_idx++;
	if (this->next_idx >= 8) {
		this->next_idx = 0;
		this->full = 1;
	}
}

void PhoneBook::Search() {
	Contact c;
	std::string errMsg = "Take a break. Drink tea, walk in the park and try again later :)";
	std::string digits = "0123456789";
	std::string narrowedDigits = "01234567";
	std::string contactIndex;
	std::string str;
	int contactCount = 0;
	int idx;
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
	std::cout << " | ";

	std::cout << std::right << std::setw(10) << "NICK NAME";
	std::cout << std::endl;

	for (i = 0; i < contactCount; i++) {
		// Q: it is okay to start from 0? :)
		std::cout << std::right << std::setw(10) << i;
		std::cout << " | ";

		// Q: move it to some func?
		// Q: can it be done using only cout magic?
		str = this->contacts[i].firstName;
		// Q: what diff btw s.size() and s.length()?
		if (str.length() > 10) {
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
		std::cout << " | ";

		str = this->contacts[i].nickName;
		if (str.length() > 10) {
			str.resize(9);
			str = str + ".";
		}
		std::cout << std::right << std::setw(10) << str;
		std::cout << std::endl;

	}

	// Q: should I display a secret? check github solutions or ask others
	std::cout << "Please enter index: ";
	std::getline(std::cin, contactIndex);

	if (contactIndex.empty()) {
		std::cout << "Index can't be empty." << std::endl << errMsg << std::endl;
		return;
	}

	if (contactIndex.find_first_not_of(digits) != std::string::npos) {
		std::cout << "Index should be a number." << std::endl << errMsg << std::endl;
		return;
	}

	if (contactIndex.size() != 1) {
		std::cout << "Index should be in between 0 and 7 including. I.e. [0-7]" << std::endl << errMsg << std::endl;
		return;
	}

	std::istringstream is(contactIndex);
	idx = 9;
	is >> idx;

	if ( is.fail() ) {
		std::cout << "ERROR: converting string to int is failed. Consult with system administrator." << std::endl;
		return;
	}

	if (idx < 0 || idx > 7) {
		std::cout << "Index should be in between 0 and 7 including. I.e. [0-7]" << std::endl << errMsg << std::endl;
		return;
	}

	if (this->full == 0 && idx >= this->next_idx ) {
		std::cout << "ERROR: there is no such index: " << idx << ". Try again." << std::endl;
		return;
	}

	std::cout << "IDX: " << idx << std::endl;	
	// Display contact
	// Q: should it be method on Contact object?
	//		(similar can be for short versions when we show index)
	c = this->contacts[idx];
	std::cout << "[Contact details]" << std::endl;
	std::cout << "First Name: " << c.firstName << std::endl;
	std::cout << "Last Name: " << c.lastName<< std::endl;
	std::cout << "Nick Name: " << c.nickName << std::endl;
	std::cout << "Phone Number: " << c.phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << c.darkestSecret << std::endl;
}

