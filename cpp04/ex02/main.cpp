#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << std::endl << "<subject tests #1>" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << "<the end>" << std::endl;

	return 0;
}

