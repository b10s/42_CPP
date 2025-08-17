#include "./Zombie.hpp"

int main() {

	Zombie* zheap = newZombie("heap");
	zheap->announce();
	delete zheap;

	randomChump("stack");

	return (0);
}

