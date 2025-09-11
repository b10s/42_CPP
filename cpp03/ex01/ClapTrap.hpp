// ClapTrap is a character featured in the action role-playing game series Borderlands.
// ref.: https://en.wikipedia.org/wiki/Claptrap

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

//TODO: if I have constructor with arg name, do I need to have constractor without args?
// check cppref for rule of four


// https://de.cppreference.com/w/cpp/language/rule_of_three.html

//Q: why constructors don't return value (void or ClassName)?
class ClapTrap {
	public:
		ClapTrap(const std::string& name);

		// default constructor is needed in cases:
		//	- when we want to create array of objects e.g. Foo arr[42]
		//		(we still can use non default constructor technically
		//		when creating non dynamic arrays).
		ClapTrap();

		// copy constructor is needed in some cases;
		//  - e.g. object has pointer to some memory and we want to copy also this
		//		memory not only pointer; if we copy only pointer, then two instances
		//		can compete for this memory; if one run delete on it, other will fail
		//		to access this memory (i.e. to avoid shallow copy).
		ClapTrap(const ClapTrap& other); 

		// taking in mind cpp calls = or copy constructor implicitly
		// e.g. when we pass obj to function by value, it is important to implement
		// both and copy constructor and assignment operator
		// for the same reason as described above.
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
			
	protected:
		std::string name;
		unsigned int hitPoinst; // i.e. health of ClapTrap
		unsigned int energyPoints;
		unsigned int attackDamage;
};

#endif

