#ifndef _13_22_H
#define _13_22_H
#include<string>
#include<iostream>
class HasPtr
{
	friend void swap(HasPtr &, HasPtr &);
	public:
		HasPtr(const std::string s = std::string()) : ps(new std::string(s)), i(0) {}
		HasPtr(const HasPtr &other) : ps(new std::string(*(other.ps))), i(other.i) {}
		//HasPtr(HasPtr &&other) : ps(other.ps), i(other.i) {other.ps = nullptr; std::cout << "here" << std::endl;}
		HasPtr &operator=(const HasPtr &other)
		{
			auto newp = new std::string(*other.ps);
			delete ps;
			ps = newp;
			i = other.i;
			return *this;
		}
		HasPtr &operator=(HasPtr &&other)
		{
			if(&other != this)
			{
				delete ps;
				ps = other.ps;
				i = other.i;
				other.ps = nullptr;
			}
		}

		//HasPtr &operator=(HasPtr);

		~HasPtr() {delete ps;}

	private:
		std::string *ps;
		int i;
};
#endif
