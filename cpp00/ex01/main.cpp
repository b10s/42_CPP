#include <stdio.h>
#include "./PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

int main() {
	printf("hi\n");
	std::string foo = "aaa";
	std::cout << std::setfill('.') << std::setw(10);
	std::cout.flags(std::ios::left);
	std::cout << 123 << std::endl;
	PhoneBook pb;
	pb.Add("aa");
	//pb.Add("bb");
	//pb.Add("cc");
	//pb.Add("dd");
	std::cout << 123 << std::endl;
}
