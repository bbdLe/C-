#ifndef _13_18_H
#define _13_18_H
#include <string>
class Employee
{
	public:
		Employee() : name(std::string()), number(n++) {}
		Employee(const std::string &nm) : name(nm), number(n++) {}

	private:
		static int n;
		std::string name;
		int number;
};

int Employee::n = 0;
#endif
