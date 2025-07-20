#include <stdio.h>
#include <iostream>
#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->idx = 0;
	this->full = 0;
}

void PhoneBook::Add(std::string firstName, std::string lastName) {
	Contact c(firstName, lastName);
	this->contacts[this->idx] = c;
	this->idx++;
	if (this->idx >= 8) {
		this->idx = 0;
		this->full = 1;
	}
}

//TODO: use resetflags after SEARCH out
// https://cplusplus.com/reference/iomanip/resetiosflags/
	
void PhoneBook::Search() {
}
