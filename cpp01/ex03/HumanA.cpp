#include "./HumanA.hpp"
#include <iostream>

// Q: why it works with : but doesnt work if I use code inside {} ?
// initialization list
// Q: try to bring back and see the err
HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

