#include "./Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Default constructor. The default Brain. I'm empty." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Copy constructor of Brain class. Deep copy of ideas." << std::endl;
	*this = other;
}

// Q: should I delete old strings?
//    or they will be deleted when I overwrite them? (valgrind shows no leaks)
Brain& Brain::operator=(const Brain& other) {
	std::cout << "Assignment operator of Brain class is here. Hi. Doing deep copies of ideas." << std::endl;

	if (this == &other) {
		return *this;
	}

	// TODO: can I calculate size of array?
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}

	return *this;
}

Brain::~Brain() {
	std::cout << "Destructor of Brain class." << std::endl;
	// Q: will array of 100 string be removed automatically?
}

