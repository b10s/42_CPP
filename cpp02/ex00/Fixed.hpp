#ifndef FIXED_HPP
#define FIXED_HPP

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
		int value;
		// When applied to a member variable of a class, static means
		// there is only one copy of that variable,
		// shared across all instances of the class.
		static const int fraction = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		// constant member function:
		// 	- cannot modify any non-static member variables of the class object on which it is called
		//	- cannot call any non-const member functions of the same class object, as those functions might modify the object's state
		//	- can be called on both const and non-const objects of the class
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif

