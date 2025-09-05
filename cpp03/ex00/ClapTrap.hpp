// ClapTrap is a character featured in the action role-playing game series Borderlands.
// ref.: https://en.wikipedia.org/wiki/Claptrap

#include <string>
//TODO: header protection

//TODO: read and document here why copy constructor and assign operator is needed
// what is benefits of orthodox canon form

//TODO: if I have constructor with arg name, do I need to have constractor without args?
// check cppref for rule of four

//Q: why constructors have not return value? no void no ClassName?
class ClapTrap {
	public:
		ClapTrap(const std::string& name);

		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
			
	private:
		std::string name;
		unsigned int hitPoinst; // i.e. health of ClapTrap
		unsigned int energyPoints;
		unsigned int attackDamage;
};

