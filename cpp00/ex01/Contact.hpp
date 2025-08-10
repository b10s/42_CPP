//TODO: from subj:
// You should be able to use each of your headers independently from others. Thus,
// they must include all the dependencies they need. However, you must avoid the
// problem of double inclusion by adding include guards. Otherwise, your grade will
// be 0.
#include <string>

// TODO: check if fields are public or private? (some repo on github)

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

//TODO: move all string fields to private; add two functions:
//			print contact for search index
//			print contact fully

