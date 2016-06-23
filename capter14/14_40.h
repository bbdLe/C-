#ifndef _14_40_H
#define _14_40_H
#include<string>
#include<iostream>
class A
{
	public:
		bool operator()(const std::string &a, const std::string &b)
		{
			return a.size() < b.size();
		}
};

class B
{
	public:
		B(size_t sz) : size(sz) {}
		bool operator()(const std::string &a)
		{
			return a.size() >= size;
		}

	private:
		size_t size;
};

class C
{
	public:
		void operator()(const std::string &str)
		{
			std::cout << str << std::endl;
		}
};
#endif
