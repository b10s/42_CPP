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


	std::cout << std::endl << "<subject tests #2>" << std::endl;
	Animal animals[10];
	for (int i = 0; i < 5; i++) {
		animals[i] = Dog();
	}
	for (int i = 5; i < 10; i++) {
		animals[i] = Cat();
	}

	std::cout << std::endl << "<destroying>" << std::endl;
	for (int i =0; i < 10; i++) {
		animals[i] = Animal();
		std::cout << "The animal is dead, long live the animal!" << std::endl << std::endl;
	}

	std::cout << std::endl << "<the end>" << std::endl;

	return 0;
}

