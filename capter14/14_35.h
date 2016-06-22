#ifndef _14_34_H
#define _14_34_H
#include<iostream>
#include<string>
class Test
{
	public:
		Test(std::istream &is = std::cin) : s(is) {}
		std::string operator()()
		{
			std::string temp;
			s >> temp;
			if(s)
				return temp;
			else
				return std::string();
		}

	private:
		std::istream &s;
};
#endif
