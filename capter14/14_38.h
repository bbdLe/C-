#ifndef _14_38_H
#define _14_38_H
#include<string>
class Length
{
	public:
		Length(size_t n) : l(n) {}
		bool operator()(const std::string &str)
		{
			return str.size() == l;
		}

	private:
		size_t l;
};
#endif
