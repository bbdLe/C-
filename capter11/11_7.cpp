#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	map<string, vector<string>> familys;
	string str, family, name;

	while(getline(cin, str))
	{
		istringstream iss(str);
		iss >> family;
		while(iss >> name)
			familys[family].push_back(name);
	}

	for(const auto &family : familys)
	{
		cout << "family " << family.first << " : ";
		for(const auto &name : family.second)
			cout << name << " ";
		cout << endl;
	}

	return 0;
}
