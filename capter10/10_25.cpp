#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

void eliDups(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	auto endIter = unique(vec.begin(), vec.end());
	vec.erase(endIter, vec.end());
}

bool my_count(const string &str, size_t sz)
{
	return str.size() >= sz;
}

bool check_size(const string &str, size_t sz)
{
	return str.size() >= sz;
}

void biggies(vector<string> &vec, size_t sz)
{
	eliDups(vec);
	stable_sort(vec.begin(), vec.end(), [](const string &str1, const string &str2) {return str1.size() < str2.size();});
	auto endIter = stable_partition(vec.begin(), vec.end(), bind(check_size, _1, sz));
	auto wc = count_if(vec.begin(), vec.end(), bind(my_count, _1, sz));
	for_each(vec.begin(), endIter, [](const string &str) {cout << str << endl;});

	cout << "wordcount:" << wc << endl;
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 6);
	return 0;
}
