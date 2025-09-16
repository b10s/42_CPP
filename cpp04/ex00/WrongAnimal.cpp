#include "./WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	this->type = "Urmetazoan"; // parent of all animals
	std::cout << "Default constructor. The default WrongAnimal - " << this->type << " - is born." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
	std::cout << "Copy constructor of WrongAnimal class. The " << this->type << " is born." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "Assignment operator of WrongAnimal class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor of WrongAnimal class. The " << this->type << " is destroyed." << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "The " << this->type << " makes no sound." << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->type;
}

