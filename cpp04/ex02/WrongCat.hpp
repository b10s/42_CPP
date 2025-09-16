#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "./WrongAnimal.hpp"
#include <string>

// https://de.cppreference.com/w/cpp/language/rule_of_three.html
class WrongCat : public WrongAnimal {
	public:
		// default constructor is needed in cases:
		//	- when we want to create array of objects e.g. Foo arr[42]
		//		(we still can use non default constructor technically
		//		when creating non dynamic arrays).
		WrongCat();

		// copy constructor is needed in some cases;
		//  - e.g. object has pointer to some memory and we want to copy also this
		//		memory not only pointer; if we copy only pointer, then two instances
		//		can compete for this memory; if one run delete on it, other will fail
		//		to access this memory (i.e. to avoid shallow copy).
		WrongCat(const WrongCat& other); 

		// taking in mind cpp calls = or copy constructor implicitly
		// e.g. when we pass obj to function by value, it is important to implement
		// both and copy constructor and assignment operator
		// for the same reason as described above.
		WrongCat& operator=(const WrongCat& other);
		virtual ~WrongCat();
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif


