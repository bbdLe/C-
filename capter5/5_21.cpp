#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str, laststr = "";
	bool flag = false;

	while(cin >> str)
	{
		if(!isupper(str[0]))
			continue;
		if(str == laststr)
		{
			flag = true;
			break;
		}
		else
		{
			laststr = str;
		}
	}

	if(flag)
	{
		cout << str << endl;
	}
	else
	{
		cout << "No repeated word show up" << endl;
	}
	return 0;
}
