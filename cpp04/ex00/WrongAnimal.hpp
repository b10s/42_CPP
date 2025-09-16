#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

// https://de.cppreference.com/w/cpp/language/rule_of_three.html
class WrongAnimal {
	public:
		// default constructor is needed in cases:
		//	- when we want to create array of objects e.g. Foo arr[42]
		//		(we still can use non default constructor technically
		//		when creating non dynamic arrays).
		WrongAnimal();

		// copy constructor is needed in some cases;
		//  - e.g. object has pointer to some memory and we want to copy also this
		//		memory not only pointer; if we copy only pointer, then two instances
		//		can compete for this memory; if one run delete on it, other will fail
		//		to access this memory (i.e. to avoid shallow copy).
		WrongAnimal(const WrongAnimal& other); 

		// Q: do we need parameterized constructor here?
		// parameterized constructor (Q: why we need it?)
		WrongAnimal(const std::string& type);

		// taking in mind cpp calls = or copy constructor implicitly
		// e.g. when we pass obj to function by value, it is important to implement
		// both and copy constructor and assignment operator
		// for the same reason as described above.
		WrongAnimal& operator=(const WrongAnimal& other);
		virtual ~WrongAnimal();

		virtual void makeSound(void) const;

		// Q: why getType no need to be virtual?
		std::string getType(void) const;

	protected:
		std::string type;
};

#endif

