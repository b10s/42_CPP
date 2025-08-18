#include "./HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

// Q: why I have to pass reference but can't pass just a Weapon?
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

