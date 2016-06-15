#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <utility>

using namespace std;

int main()
{
	map<string, vector<pair<string, string>>> familys;
	string str, family, name, birthday;

	while(getline(cin, str))
	{
		istringstream iss(str);
		iss >> family;
		while(iss >> name >> birthday)
			familys[family].push_back(make_pair(name, birthday));
	}

	for(const auto &family : familys)
	{
		cout << "family " << family.first << " : " << endl;
		for(const auto &person : family.second)
			cout << person.first << " " << person.second << endl;;
		cout << endl;
	}

	return 0;
}
