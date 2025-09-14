#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include <iostream>

int main() {
	{
		std::cout << std::endl << "<showing construcor/destructor chaining with default constructor>" << std::endl;
		ScavTrap st0 = ScavTrap();
	}

	std::cout << std::endl << "<default constructor>" << std::endl;
	ScavTrap st0 = ScavTrap();

	std::cout << std::endl << "<copy constructor>" << std::endl;
	ScavTrap st1 = ScavTrap(st0);

	std::cout << std::endl << "<parameterized constructor>" << std::endl;
	ScavTrap st3 = ScavTrap("foo");

	std::cout << std::endl << "<end>" << std::endl;

	return 0;
}

