#include "./Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	Zombie* zhorde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		zhorde[i].setName(name);
	}
	return zhorde;
}

