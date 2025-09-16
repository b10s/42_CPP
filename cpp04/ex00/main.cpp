#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << std::endl << "<subject tests>" << std::endl;
	//const Animal* meta = new Animal();
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	//const Animal* i = new Cat();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "<default Animal constructor>" << std::endl;
	Animal a0 = Animal();

	std::cout << std::endl << "<parameterized Animal constructor>" << std::endl;
	Animal a1 = Animal("Shark");

	std::cout << std::endl << "<copy Animal constructor>" << std::endl;
	Animal a2 = Animal(a1);

	std::cout << std::endl << "<make sound Animal>" << std::endl;
	a2.makeSound();


	std::cout << std::endl << "<default Dog constructor>" << std::endl;
	Dog d0 = Dog();

	std::cout << std::endl << "<parameterized Dog constructor>" << std::endl;
	Dog d1 = Dog("Shark");

	std::cout << std::endl << "<copy Dog constructor>" << std::endl;
	Dog d2 = Dog(d1);

	std::cout << std::endl << "<make sound Dog>" << std::endl;
	d2.makeSound();


	std::cout << std::endl << "<default Dog constructor>" << std::endl;
	Cat c0 = Cat();

	std::cout << std::endl << "<parameterized Cat constructor>" << std::endl;
	Cat c1 = Cat("Shark");

	std::cout << std::endl << "<copy Cat constructor>" << std::endl;
	Cat c2 = Cat(c1);

	std::cout << std::endl << "<make sound Cat>" << std::endl;
	c2.makeSound();

	std::cout << std::endl << "<the end>" << std::endl;

	delete meta;
	delete j;
	delete i;

	return 0;
}


