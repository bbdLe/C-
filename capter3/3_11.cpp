#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	const string str = "Keep out!";

	for(auto &c : str)
	{
		//c = 'X';	Wrong, c is const char &
		cout << c << endl;
	}

	return 0;
}
