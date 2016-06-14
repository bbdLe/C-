#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void elimDup(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	auto uniqueEnd = unique(vec.begin(), vec.end());
	vec.erase(uniqueEnd, vec.end());
}

bool isShort(const string &str1, const string &str2)
{
	return str1.size() < str2.size();
}



int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	elimDup(vec);
	stable_sort(vec.begin(), vec.end(), isShort);
	for(const auto &str : vec)
	{
		cout << str << endl;
	}

	return 0;
}
