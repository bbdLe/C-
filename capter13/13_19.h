#ifndef _13_19_H
#define _13_19_H
#include <string>
class Employee
{
	public:
		Employee() : name(std::string()), number(n++) {}
		Employee(const std::string &nm) : name(nm), number(n++) {}
		Employee(const Employee &a) : name(a.name), number(n++) {}
		Employee &operator=(const Employee &a)
		{
			name = a.name;
			number = n++;
		}
	private:
		static int n;
		std::string name;
		int number;
};

int Employee::n = 0;
#endif
