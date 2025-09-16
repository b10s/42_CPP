#include "./Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Default constructor. The default Dog - " << this->type << " - is born." << std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;
	std::cout << "Copy constructor of Dog class. The " << this->type << " is born." << std::endl;
}

// Q: do we need parameterized constructor here? It breaks a bit the idea.
Dog::Dog(const std::string& type) {
	*this = Dog();
	this->type = type;
	std::cout << "Parameterized constructor of Dog class. The " << type << " is born." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Assignment operator of Dog class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	return *this;
}

Dog::~Dog() {
	std::cout << "Destructor of Dog class. The " << this->type << " is destroyed." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "The " << this->type << " barks." << std::endl;
}

std::string Dog::getType(void) const {
	return this->type;
}

