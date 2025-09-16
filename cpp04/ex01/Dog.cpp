#include "./Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor. The default Dog - " << this->type << " - is born." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	*this = other;

	// deep copy
	this->brain = new Brain();
	this->brain = other.brain;

	std::cout << "Copy constructor of Dog class. The " << this->type << " is born." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Assignment operator of Dog class is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->type = other.type;

	// deep copy
	this->brain = new Brain();
	this->brain = other.brain;

	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Destructor of Dog class. The " << this->type << " is destroyed." << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "The " << this->type << " barks." << std::endl;
}

std::string Dog::getType(void) const {
	return this->type;
}

