#include "./ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name) {
	*this = ClapTrap();
	this->name = name;
	std::cout << "Nantoka constructor. The " << name << " ClapTrap is born." << std::endl;
}

ClapTrap::ClapTrap() {
	name = "default";
	hitPoinst = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Default constructor. The default ClapTrap is born." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "Copy constructor. The " << this->name << " ClapTrap is born." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Assignment operator is here. Hi." << std::endl;
	if (this == &other) {
		return *this;
	}

	this->name = other.name;
	this->hitPoinst = other.hitPoinst;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "The " << this->name << " ClapTrap is destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints > 0 && this->hitPoinst > 0) {
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " can't attack.";
		std::cout << " Not enough energyPoints or hitPoinst." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoinst > 0) {
		std::cout << "ClapTrap " << this->name << " is under attack.";
		if (amount >= this->hitPoinst) {
			std::cout << " Loosing all " << this->hitPoinst << " of health! x_x" << std::endl;
			this->hitPoinst = 0;
		} else {
			std::cout << " Loosing " << amount << " of health!" << std::endl;
			this->hitPoinst -= amount;
		}
	} else {
		std::cout << "ClapTrap " << this->name << " seems to be dead." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoinst > 0) {
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " repairs.";
		std::cout << " Receiving " << amount << " health points!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " can't repair.";
		std::cout << " Not enough energyPoints or hitPoinst." << std::endl;
	}
}

