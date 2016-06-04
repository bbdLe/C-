#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	string str;

	while(cin >> str)
		v.push_back(str);

	for(auto &r1 : v)
	{
		for(auto &r2 : r1)
		{
			r2 = toupper(r2);
		}
	}

	for(auto r1 : v)
	{
		cout << r1 << endl;
	}
	return 0;
}
