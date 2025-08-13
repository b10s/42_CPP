//Q: from subj:
// You should be able to use each of your headers independently from others. Thus,
// they must include all the dependencies they need. However, you must avoid the
// problem of double inclusion by adding include guards. Otherwise, your grade will
// be 0.

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "./Contact.hpp"
#include <string>
#define CONTACTS_CNT 8

class PhoneBook {
	public:
		PhoneBook();
		void Add();
		void Search();
	private:
		Contact contacts[CONTACTS_CNT];
		int next_idx;
		int full;
};

#endif

