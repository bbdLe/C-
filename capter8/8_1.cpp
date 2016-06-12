#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::istream;
using std::endl;
using std::string;

istream &f(istream &is)
{
	int i;
	while(!is.eof() && is >> i)
	{
		cout << i << endl;
	}

	is.clear();
	return is;
}

int main()
{
	string str;
	f(cin);
	
	cin >> str;
	cout << str << endl;
	return 0;
}
