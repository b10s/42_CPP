#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string replace_substring_manual(std::string str, const std::string& from, const std::string& to){
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        // Erase the 'from' substring
        str.erase(start_pos, from.length());
        // Insert the 'to' substring at the same position
        str.insert(start_pos, to);
        // Advance the starting position to avoid replacing newly inserted 'to' if it contains 'from'
        start_pos += to.length(); 
    }
    return str;
}


int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Error: expected arguments are filename, str1, str2" << std::endl;
		return 1;
	}

	std::string inFilePath = argv[1];
	std::string outFilePath = inFilePath + ".replace";
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inFile;
	// Q: why we need to pass C string?
	inFile.open(inFilePath.c_str(), std::ios::in);
	if (inFile.is_open()) {
		// File opened successfully, perform operations
	} else {
		std::cerr << "Error opening in file!" << std::endl;
		return 1;
	}

	std::ofstream outFile;
	outFile.open(outFilePath.c_str(), std::ios::out);
	if (outFile.is_open()) {
		// File opened successfully, perform operations
	} else {
		std::cerr << "Error opening out file!" << std::endl;
	}

	std::stringstream buffer;
	buffer << inFile.rdbuf(); // Read the entire file content into the stringstream
	
	std::string fileContent = buffer.str(); // Get the string from the stringstream
	
	//std::cout << "File content:\n" << fileContent << std::endl;
	std::string res = replace_substring_manual(fileContent, s1, s2);
	outFile << res;
	//std::cout << "File content:\n" << res << std::endl;
	
	inFile.close();
	outFile.close();
}

