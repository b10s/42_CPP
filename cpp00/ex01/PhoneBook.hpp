#include "./Contact.hpp"
#include <string>
#define CONTACTS_CNT 8

class PhoneBook {
	public:
		PhoneBook();
		void Add(std::string firstName, std::string lastName);
		void Search();
	private:
		Contact contacts[CONTACTS_CNT];
		int idx;
		int full;
};

