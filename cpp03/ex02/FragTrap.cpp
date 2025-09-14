#include "./FragTrap.hpp"
#include <iostream>


// Q: why constructor/desctructor order is different?
// Q: why I need to chage to protected instead of private?

FragTrap::FragTrap() {
	name = "default";
	hitPoinst = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Default constructor. The default FragTrap is born." << std::endl;
}

FragTrap::FragTrap(const std::string& name) {
	*this = FragTrap();
	this->name = name;
	std::cout << "Parameterized constructor. The " << name << " FragTrap is born." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;
	std::cout << "Copy constructor. The " << this->name << " FragTrap is born." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "The " << this->name << " FragTrap is destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "The " << this->name << " shows positive high-fives request." << std::endl;
}
