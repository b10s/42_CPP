#include "./Cat.hpp"
#include <iostream>

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Default constructor. The default Cat - " << this->type << " - is born." << std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;
	std::cout << "Copy constructor of Cat class. The " << this->type << " is born." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Assignment operator of Cat class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	return *this;
}

Cat::~Cat() {
	std::cout << "Destructor of Cat class. The " << this->type << " is destroyed." << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "The " << this->type << " meows." << std::endl;
}

std::string Cat::getType(void) const {
	return this->type;
}

