#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ClapTrap& other); 
		ScavTrap& operator=(const ClapTrap& other);
		~ScavTrap();
		void guardGate();
};

#endif

