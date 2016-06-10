#ifndef _PERSON_H
#define _PERSON_H
#include <string>
#include <iostream>
struct Person
{
	std::string name() const
	{
		return pname;
	}

	std::string address() const
	{
		return paddress;
	}

	std::string pname;
	std::string paddress;
};

std::istream &read(std::istream &is, Person &someone);
std::ostream &print(std::ostream &os, const Person &someone);
#endif
