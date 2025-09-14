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

ScavTrap::ScavTrap(const std::string& name) {
	*this = ScavTrap();
	this->name = name;
	std::cout << "Parameterized constructor. The " << name << " ScavTrap is born." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;
	std::cout << "Copy constructor. The " << this->name << " ScavTrap is born." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "The " << this->name << " ScavTrap is destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoinst > 0) {
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->name << " can't attack.";
		std::cout << " Not enough energyPoints or hitPoinst." << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << "in Gate keeper modes." << std::endl;
}

