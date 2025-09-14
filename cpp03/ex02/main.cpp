#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <iostream>

int main() {
	{
		std::cout << std::endl << "<showing construcor/destructor chaining with default constructor>" << std::endl;
		FragTrap ft0 = FragTrap();
	}

	std::cout << std::endl << "<default constructor>" << std::endl;
	FragTrap ft0 = FragTrap();

	std::cout << std::endl << "<copy constructor>" << std::endl;
	FragTrap ft1 = FragTrap(ft0);

	std::cout << std::endl << "<parameterized constructor>" << std::endl;
	FragTrap ft3 = FragTrap("foo");

	std::cout << std::endl << "<high-fives>" << std::endl;
	ft3.highFivesGuys();

	std::cout << std::endl << "<end>" << std::endl;

	return 0;
}

