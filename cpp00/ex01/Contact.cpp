#include "./Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact() {
}

Contact::~Contact() {
	std::cout << "destroying contact.." << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

//TODO: use resetflags after SEARCH out
// https://cplusplus.com/reference/iomanip/resetiosflags/
	
