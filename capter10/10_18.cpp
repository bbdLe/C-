#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void eliDups(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	auto endIter = unique(vec.begin(), vec.end());
	vec.erase(endIter, vec.end());
}

void biggies(vector<string> &vec, size_t sz)
{
	eliDups(vec);
	stable_sort(vec.begin(), vec.end(), [](const string &str1, const string &str2) {return str1.size() < str2.size();});
	auto endIter = partition(vec.begin(), vec.end(), [sz](const string &str) {return str.size() >= sz;});
	auto wc = endIter - vec.begin();
	for_each(vec.begin(), endIter, [](const string &str) {cout << str << endl;});

	cout << "wordcount:" << wc << endl;
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 5);
	return 0;
}
