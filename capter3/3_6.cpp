#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	string str = "ABCDEFG";

	for(auto &c : str)
	{
		c = 'X';
	}

	cout << str << endl;
	return 0;
}
