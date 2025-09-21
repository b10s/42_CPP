#include "./Animal.hpp"
#include "./WrongAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include <iostream>

int main() {
	std::cout << std::endl << "<subject tests>" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "<test wrong animal/cat (non-virtual methods, compile time polymorphism)>" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();

	std::cout << std::endl << "<default Animal constructor>" << std::endl;
	Animal a0 = Animal();

	std::cout << std::endl << "<copy Animal constructor>" << std::endl;
	Animal a1 = Animal(a0);

	std::cout << std::endl << "<make sound Animal>" << std::endl;
	a1.makeSound();


	std::cout << std::endl << "<default Dog constructor>" << std::endl;
	Dog d0 = Dog();

	std::cout << std::endl << "<copy Dog constructor>" << std::endl;
	Dog d1 = Dog(d0);

	std::cout << std::endl << "<make sound Dog>" << std::endl;
	d1.makeSound();


	std::cout << std::endl << "<default Dog constructor>" << std::endl;
	Cat c0 = Cat();

	std::cout << std::endl << "<copy Cat constructor>" << std::endl;
	Cat c1 = Cat(c0);

	std::cout << std::endl << "<make sound Cat>" << std::endl;
	c1.makeSound();

	std::cout << std::endl << "<the end>" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wi;

	return 0;
}


