#include "./ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap ct0 = ClapTrap();
	ClapTrap ct1 = ClapTrap("Interplanetary Ninja Assassin");
	ClapTrap ct2 = ClapTrap("Idiot");

	std::cout << "test starts" << std::endl;

	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");
	ct0.attack("Wheatley");

	ct1.takeDamage(1);
	ct1.takeDamage(42);
	ct1.takeDamage(100);

	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);
	ct2.beRepaired(1);

	std::cout << "test ends" << std::endl;

	return 0;
}

