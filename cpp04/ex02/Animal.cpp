#include "./Animal.hpp"
#include <iostream>

Animal::Animal() {
	this->type = "Urmetazoan"; // parent of all animals
	std::cout << "Default constructor. The default Animal - " << this->type << " - is born." << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
	std::cout << "Copy constructor of Animal class. The " << this->type << " is born." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Assignment operator of Animal class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor of Animal class. The " << this->type << " is destroyed." << std::endl;
}

std::string Animal::getType(void) const {
	return this->type;
}

