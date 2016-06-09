#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str1, str2;
	do
	{
		cout << "Please input two word :" << endl;
		if(cin >> str1 >> str2)
		{
			if(str1.size() > str2.size())
				cout << str1 << endl;
			else
				cout << str2 << endl;
		}
	} while(cin);
	return 0;
}
