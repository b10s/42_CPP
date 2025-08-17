#include "./Zombie.hpp"

int main() {
	int n = 5;
	Zombie* zhorde = zombieHorde(n, "Joe");
	for (int i =0; i < n; i++ ) {
		zhorde[i].announce();
	}

	delete[] zhorde;
}

