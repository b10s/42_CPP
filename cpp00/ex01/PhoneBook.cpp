#include <stdio.h>
#include <iostream>
#include <string>
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->idx = 0;
	this->full = 0;
}

void PhoneBook::Add() {
	std::string firstName;
	std::string lastName;
	//Contact c(firstName, lastName);
	std::cout << "Please enter first name, last name, .. . All fields must be not empty." << std::endl;
	std::cout << "First name: ";
	//std::cin.ignore();
	std::getline(std::cin, firstName);
	//std::cin >> std::noskipws >> firstName;
	//std::cin >> std::skipws;
	//std::cin.getline(firstName, 10);

	if (firstName.empty()) {
		std::cout << "First Name can't be empty. Try again." << std::endl;
		return;
	}
	// check if empty here, then ask once more to enter if still empty, abort
	std::cout << "Last name: ";
	std::getline(std::cin, firstName);
	if (firstName.empty()) {
		std::cout << "Last Name can't be empty. Try again. Aborting adding of contact." << std::endl;
		return;
	}
	//std::cin >> lastName;


	//this->contacts[this->idx] = c;
	//this->idx++;
	//if (this->idx >= 8) {
		//this->idx = 0;
		//this->full = 1;
	//}
}

//TODO: use resetflags after SEARCH out
// https://cplusplus.com/reference/iomanip/resetiosflags/
	
void PhoneBook::Search() {
}
