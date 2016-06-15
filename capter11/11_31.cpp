#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<string, string> m;

	m.insert({"Mike", "hello"});
	m.insert({"Mike", "fuck"});
	m.insert({"iMike", "shit"});

	auto pos = m.find("Mike");
	if(pos != m.end())
	{
		m.erase(pos);
	}

	for(auto &item : m)
	{
		cout << item.second << endl;
	}

	return 0;
}
