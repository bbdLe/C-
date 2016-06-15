#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string str;
	vector<string> vec;

	while(cin >> str)
	{
		if(find(vec.begin(), vec.end(), str) == vec.end())
			vec.push_back(str);
	}

	for(auto str : vec)
		cout << str << endl;
}
