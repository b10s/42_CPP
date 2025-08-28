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

bool Fixed::operator>(const Fixed& other) const {
	return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
	// Q: is it on stack or heap?
	// A: it is on heap but return is by value (not pointer, not reference)
	// so value will be copied
	Fixed res = Fixed(0);
	res.setRawBits(this->value + other.value);
	return res;
}

// here I assume unsigned fixed point
Fixed Fixed::operator-(const Fixed& other) const {
	Fixed res = Fixed(0);
	res.setRawBits(this->value - other.value);
	return res;
}

// lazy way; properly need to work with bits?
Fixed Fixed::operator*(const Fixed& other) const {
	Fixed res = Fixed(this->toFloat() *	 other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed res = Fixed(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed& Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->value++;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->value--;
	return tmp;
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

// A static member function is a function that belongs to the class itself,
// rather than to any specific object (instance) of that class.
// Q: from definition we can't say if it static or not? need to check declaration in hpp file
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

// Q: why I can use it in main.cpp without const as return val?
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

