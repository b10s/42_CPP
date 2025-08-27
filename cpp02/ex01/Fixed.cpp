#include "./Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Q: it seems like we can corrupt big ints? (ints more than 24 bits, 16777216 and more)
Fixed::Fixed(const int x) {
	std::cout << "Int constructor called" << std::endl;
	this->value = x << this->fraction;
}

Fixed::Fixed(const float x) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(x * (1 << this->fraction));
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	// check for self assignment e.g. obj = obj
	// here it is not needed but good to know
	if (this == &other) {
		return *this;
	}
	this->value = other.value;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const {
	float res = 0.0f;

	res = (float)this->value / (float)( 1 << this->fraction);
	return res;
}

int Fixed::toInt(void) const {
	return this->value >> this->fraction;
}

