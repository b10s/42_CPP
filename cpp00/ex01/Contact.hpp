#include <string>

// TODO: fields are - nickname, phone number, and darkest secret

// TODO: check if fields are public or private?

class Contact {
	public:
		Contact();
		~Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	private:
};

