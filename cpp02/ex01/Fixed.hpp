#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/* Orthodox Canonical Form
		- default constructor
		- copy constructor
		- copy assignment operator
		- destructor

		rule of three (default constructor is not counted I guess):
		https://en.cppreference.com/w/cpp/language/rule_of_three.html
*/

class Fixed {
	private:
		unsigned int value;
		// When applied to a member variable of a class, static means
		// there is only one copy of that variable,
		// shared across all instances of the class.
		static const int fraction = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		// Q: what is the difference with setRawBits?
		Fixed(const int x);
		Fixed(const float x);
		// interesting, the `const Fixed& other` and `Fixed const &other` are the same
		Fixed& operator=(const Fixed& other);
		// Q: there is no this and we must use obj?
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		~Fixed();
		// constant member function:
		// 	- cannot modify any non-static member variables of the class object on which it is called
		//	- cannot call any non-const member functions of the same class object, as those functions might modify the object's state
		//	- can be called on both const and non-const objects of the class
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

#endif

