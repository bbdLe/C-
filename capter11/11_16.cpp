#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <utility>

using namespace std;

int main()
{
	map<string, int> m;
	auto iter = inserter(m, m.begin());

	iter = make_pair("hello", 1);
	for(const auto &p : m)
	{
		cout << p.first << " " << p.second << endl;
	}

	return 0;
}
