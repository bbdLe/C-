#ifndef _13_22_H
#define _13_22_H
#include<string>
class HasPtr
{
	public:
		HasPtr(const std::string s = std::string()) : ps(new std::string(s)), count(new int(0)), i(0) {}
		HasPtr(const HasPtr &other) : ps(new std::string(*(other.ps))), count(other.count), i(other.i) {++*count;}
		HasPtr &operator=(const HasPtr &other)
		{
			++*other.count;
			if(--*count == 0)
			{
				delete count;
				delete ps;
			}
			count = other.count;
			auto newp = new std::string(*other.ps);
			ps = newp;
			i = other.i;
			return *this;
		}
		~HasPtr()
		{
			if(--*count == 0)
			{
				delete ps;
				delete count;
			}
		}

	private:
		std::string *ps;
		int *count;
		int i;
		
};
#endif
