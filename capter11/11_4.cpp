#include <string>
#include <unordered_map>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	unordered_map<string, unsigned> map;
	string str;

	while(cin >> str)
	{
		str.erase(stable_partition(str.begin(), str.end(), [](const char ch){return ch != '.';}), str.end());
		for(auto &ch : str)
			ch = tolower(ch);
		++map[str];
	}

	/* a better solution from @pezy */
	/*while(cin >> str)
	{
		for(auto &ch : str)
			ch = tolower(ch);
		str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end());
		++map[str];
	}*/

	for(const auto &item : map)
		cout << item.first << " occurs " << item.second << ((item.second > 1) ? " times" : "time") << endl;

	return 0;
}
