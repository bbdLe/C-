#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline bool isShorter(const string &str1, const string &str2)
{
	return str1.size() < str2.size();
}

int main()
{
	if(isShorter("hello", "hello, world"))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}
