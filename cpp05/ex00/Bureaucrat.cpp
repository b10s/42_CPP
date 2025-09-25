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

// name isn't changable
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Assignment operator of Bureaucrat class is here." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->setGrade(other.grade);

	return *this;
}

Bureaucrat::Bureaucrat(const std::string aname, const int agrade) : name(aname) {
	this->setGrade(agrade);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor of Bureaucrat class. The " << this->name << " is destroyed." << std::endl;
}

const std::string& Bureaucrat::getName(void) {
	return this->name;
}

const int& Bureaucrat::getGrade(void) {
	return this->grade;
}

// the lower number, the higher grade it is
// 1 - is the highest
void Bureaucrat::incGrade(void) {
	this->setGrade(this->getGrade() - 1);
}

// the higher number, the lower grade it is
// 150 - is the lowest
void Bureaucrat::decGrade(void) {
	this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::setGrade(int agrade) {
	if (agrade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (agrade < 1 ) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->grade = agrade;
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat can't have grade more than 150.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat can't have grade less than 1.";
}

