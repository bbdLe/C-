#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

int main()
{
	unordered_map<string, unsigned> map;
	string str;

	while(cin >> str)
		++map[str];

	for(const auto &item : map)
		cout << item.first << " occurs " << item.second << ((item.second > 1) ? " times" : "time") << endl;

	return 0;
}
