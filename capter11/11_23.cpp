#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	multimap<string, string> familys;
	string str, family, name;

	while(getline(cin, str))
	{
		istringstream iss(str);
		iss >> family;
		while(iss >> name)
			familys.insert({family, name});
	}

	for(const auto &family : familys)
	{
		cout << family.first << family.second << endl;
	}

	return 0;
}
