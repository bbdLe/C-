#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
	const char ca1[] = "hello, world";
	const char ca2[] = "goodbye, world";
	string str1 = "good";
	string str2 = "bad";

	if(strcmp(ca1, ca2) == 0)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}

	if(str1 == str2)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}

	return 0;
}
