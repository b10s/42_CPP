#include "./Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact() {
}

Contact::~Contact() {
	std::cout << "DEBUG: destroying contact." << std::endl;
}

// TODO: add more fields as in subj
Contact::Contact(std::string firstName, std::string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

