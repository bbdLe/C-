#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	multimap<string, string> mulm;
	map<string, vector<string>> m;
	vector<string> vec;

	mulm.insert({"Mike", "hello"});
	mulm.insert({"Mike", "fuck"});
	mulm.insert({"Mike", "shit"});
	mulm.insert({"Jack", "kk"});
	mulm.insert({"Jack", "sgfsda"});

	for(auto &item : mulm)
	{
		m[item.first].push_back(item.second);
		if(find(vec.begin(), vec.end(), item.first) == vec.end())
		{
			vec.push_back(item.first);
		}
	}

	sort(vec.begin(), vec.end());
	for(auto &name : vec)
	{
		auto tempvec = m[name];
		cout << name << " : ";
		sort(tempvec.begin(), tempvec.end());
		for(auto item : tempvec)
			cout << item << " ";
		cout << endl;
	}

	return 0;
}
