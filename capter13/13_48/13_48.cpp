#include<vector>
#include<iostream>
#include"String.h"

using namespace std;

int main()
{
	vector<String> vec;
	String str1("hello");
	String str2("World");

	cout << "end";
	vec.push_back(str1);
	vec.push_back(str2);
}
