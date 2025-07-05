#include <string>

class Contact {
	public:
		Contact();
		~Contact();
		Contact(std::string firstName, std::string lastName);
	private:
		std::string firstName;
		std::string lastName;
		//std::string nickName;
		//std::string phoneNumber;
		//std::string darkestSecret;
};

