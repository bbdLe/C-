#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::istream;
using std::endl;
using std::string;
using std::istringstream;

istream &f(istream &is)
{
	string str;
	while(!is.eof() && is >> str)
	{
		cout << str << endl;
	}

	is.clear();
	return is;
}

int main()
{
	string str;
	istringstream iss("haha ruozhi baichi");
	f(iss);
	
	cin >> str;
	cout << str << endl;
	return 0;
}
