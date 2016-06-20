#include<iostream>
#include<algorithm>
#include"13_31.h"

using namespace std;
using std::swap;


int main()
{
	vector<HasPtr> vec = {{"d"}, {"zc"}, {"a"}, {"b"}};
	swap(vec[0], vec[1]);
	sort(vec.begin(), vec.end());

	return 0;
}
