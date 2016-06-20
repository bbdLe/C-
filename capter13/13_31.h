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
		HasPtr &operator=(const HasPtr &other)
		{
			auto newp = new std::string(*other.ps);
			delete ps;
			ps = newp;
			i = other.i;
			return *this;
		}
		bool operator<(const HasPtr &other) const
		{
			return *ps < *other.ps;
		}
		~HasPtr() {delete ps;}
		void swap(HasPtr &b)
		{
			using std::swap;
			swap(ps, b.ps);
			swap(i, b.i);
			std::cout << *ps << std::endl;
			std::cout << *b.ps << std::endl;
		}

	private:
		std::string *ps;
		int i;
};

void swap(HasPtr &a, HasPtr &b)
{
	using std::swap;
	swap(a.ps, b.ps);
	swap(a.i, b.i);
	std::cout << *a.ps << std::endl;
	std::cout << *b.ps << std::endl;
}

#endif
