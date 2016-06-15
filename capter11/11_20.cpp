#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	map<string, unsigned> m;
	string str;

	while(cin >> str)
	{
		auto ret = m.insert({str, 1});
		if(!ret.second)
		{
			++ret.first->second;
		}
	}

	for(auto &p : m)
		cout << p.first << " " << p.second;

	return 0;
}
