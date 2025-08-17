#include "./Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	// Q: what is default value for types e.g. std::string?
	// Q: do I need to catch exception if new fails or check for NULL?
	// Q: why new/delete was introduced and not use malloc/free? Do they have some logic inside?
	Zombie* zhorde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		zhorde[i].setName(name);
	}
	return zhorde;
}

