#include "./WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "Default constructor. The default WrongCat - " << this->type << " - is born." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
	std::cout << "Copy constructor of WrongCat class. The " << this->type << " is born." << std::endl;
}

// Q: do we need parameterized constructor here? It breaks a bit the idea.
WrongCat::WrongCat(const std::string& type) {
	*this = WrongCat();
	this->type = type;
	std::cout << "Parameterized constructor of WrongCat class. The " << type << " is born." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "Assignment operator of WrongCat class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor of WrongCat class. The " << this->type << " is destroyed." << std::endl;
}

void WrongCat::makeSound(void) const {
	// Korean cats do yaong
	std::cout << "The " << this->type << " yaong." << std::endl;
}

std::string WrongCat::getType(void) const {
	return this->type;
}


