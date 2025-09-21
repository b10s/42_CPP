#include "./Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name("default") {
	this->grade = 150;
	std::cout << "Default constructor. The default Bureaucrat - " << this->name << " - is born." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name) {
	std::cout << "Copy constructor of Bureaucrat class." << std::endl;
	this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Assignment operator of Bureaucrat class is here." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->grade = other.grade;

	return *this;
}

Bureaucrat::Bureaucrat(const std::string aname, const int agrade) : name(aname) {
	if (agrade > 150) {
		//TODO: exception
	} else if (agrade < 1 ) {
		//TODO: exception
	} else {
		this->grade = agrade;
	}
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor of Bureaucrat class. The " << this->name << " is destroyed." << std::endl;
}

