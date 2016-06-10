#ifndef _PERSON_H
#define _PERSON_H
#include <string>
#include <iostream>

struct Person;
std::istream &read(std::istream &is, Person &someone);
std::ostream &print(std::ostream &os, const Person &someone);

struct Person
{
	friend std::istream &read(std::istream &is, Person &someone);
	friend std::ostream &print(std::ostream &os, const Person &someone);
	
	public:
		Person() = default;
		Person(const std::string &str) : pname(str) {}
		Person(const std::string &str1, const std::string &str2) : pname(str1), paddress(str2) {}
		Person(std::istream &is) {read(is, *this);}
		std::string name() const
		{
			return pname;
		}
		std::string address() const
		{
			return paddress;
		}

	private:
		std::string pname;
		std::string paddress;
};

#endif
