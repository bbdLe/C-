#include <utility>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<pair<string, int>> vec;
	string str;
	int num;

	while(cin >> str >> num)
	{
		pair<string, int> p(str, num);
		vec.push_back(p);
	}

	for(auto &p : vec)
	{
		cout << p.first << endl;
		cout << p.second << endl;
	}

	return 0;
}
