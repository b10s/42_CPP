#include <stdio.h>
#include <iostream>
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->idx = 0;
	this->full = 0;
}

void PhoneBook::Add(std::string firstName) {
	Contact c(firstName, "bbb");
	this->contacts[0] = c;
	std::cout << firstName << std::endl;
}

void PhoneBook::Search() {
}
