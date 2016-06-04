#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	string str1 = "ABCDEF";
	string str2 = "ABCDEF";
	decltype(str1.size()) size = str1.size();
	decltype(str1.size()) cnt = 0;

	while(cnt < size)
	{
		str1[cnt] = 'X';
		cnt++;
	}

	cout << str1 << endl;

	for(cnt = 0; cnt < size; cnt++)
	{
		str2[cnt] = 'X';
	}
	
	cout << str2 << endl;
	return 0;
}
