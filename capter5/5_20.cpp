#include <iostream>
#include <string>

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
