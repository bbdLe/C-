#ifndef _7_44_H
#define _7_44_H
#include <string>

class NoDefault
{
	public:
		NoDefault(const std::string &str) : item(str) {}
		NoDefault() = default;
	private:
		std::string item;
};

#endif
