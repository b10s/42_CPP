#include "./ScavTrap.hpp"
#include <iostream>


// Q: why constructor/desctructor order is different?
// Q: why I need to chage to protected instead of private?

ScavTrap::ScavTrap() {
	name = "default";
	hitPoinst = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "Default constructor. The default ScavTrap is born." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "The " << this->name << " ScavTrap is destroyed." << std::endl;
}
