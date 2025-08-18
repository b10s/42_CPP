#include "./Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

// Q: why it is reference but not just a string or pointer?
const std::string& Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

