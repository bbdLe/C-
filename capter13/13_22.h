#ifndef _13_22_H
#define _13_22_H
#include<string>
class HasPtr
{
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
		~HasPtr() {delete ps;}

	private:
		std::string *ps;
		int i;
};
#endif
