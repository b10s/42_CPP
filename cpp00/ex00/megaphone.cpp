#include <iostream>
#include <cctype>

// Q: use std::ios::uppercase ?
// https://cplusplus.com/reference/iomanip/setiosflags/
int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i=1; i<argc; i++) {
		char *str = argv[i];
		while (*str != '\0') {
			std::cout << (char)std::toupper(*str);
			str++;
		}
	}
	std::cout << std::endl;

	return 0;
}
