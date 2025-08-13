//Q: from subj:
// You should be able to use each of your headers independently from others. Thus,
// they must include all the dependencies they need. However, you must avoid the
// problem of double inclusion by adding include guards. Otherwise, your grade will
// be 0.

// Q: why this protection is needed?

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

// Q: do I need to make some fields private here?
// read best practice for private/public fields

class Contact {
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif

