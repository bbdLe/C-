#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool hasUpperCase(const string &str)
{
	for(auto ch : str)
	{
		if(isupper(ch))
			return true;
	}
	return false;
}

void toUpperCase(string &str)
{
	for(auto &ch : str)
	{
		ch = toupper(ch);
	}
}

int main()
{
	string str = "Hello, world";
	if(hasUpperCase("Hello, world"))
		cout << "True" << endl;
	toUpperCase(str);
	cout << str << endl;

	return 0;
}
