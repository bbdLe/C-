#include<vector>
#include<string>
#include<iostream>
#include"16_63.h"

using namespace std;

int main()
{
	vector<int> v = {123, 553, 31231};
	cout << myCount(v, 6565) << endl;

	vector<string> v1 = {"hello", "world", "bye"};
	cout << myCount(v1, "hello") << endl;

	vector<const char *> v2  = {"hello", "world", "bye"};
	const auto p = "hello";
	cout << myCount(v2, "hello") << endl;
}
