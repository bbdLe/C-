#include<vector>
#include<iostream>
#include"String.h"

using namespace std;

int main()
{
	vector<String> vec;
	String str1("hello");
	String str2("World");

	cout << "end" << endl;
	vec.push_back(str1);
	vec.push_back(str2);		// capacity can't contain the new element, so reallocate and use move construction
	vec.push_back(str2);
}
