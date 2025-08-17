#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
	private:
		std::string name;
};

Zombie* zombieHorde(int n, std::string name);

#endif

