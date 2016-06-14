#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool f(const string &str1)
{
	return str1.size() >= 5;
}

int main()
{
	vector<string> vec = {"hello", "world", "shit", "bitch", "fuck"};

	auto endIter = partition(vec.begin(), vec.end(), f);
	vec.erase(endIter, vec.end());
	for(const auto &str : vec)
	{
		cout << str << endl;
	}
}
