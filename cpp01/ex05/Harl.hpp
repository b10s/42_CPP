#ifndef HARL_HPP
#define HARL_HPP

#define DEBUG		"0"
#define INFO		"1"
#define WARNING	"2"
#define ERROR		"3"

#include <string>

class Harl {
	public:
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif

