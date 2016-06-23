#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include "14_40.h"
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
	stable_sort(vec.begin(), vec.end(), A());
	auto endIter = find_if(vec.begin(), vec.end(), B(sz));
	auto wc = vec.end() - endIter;
	for_each(endIter, vec.end(), C());

	cout << "wordcount:" << wc << endl;
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 5);
	return 0;
}
