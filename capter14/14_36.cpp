#include<iostream>
#include<string>
#include<vector>
#include"14_35.h"

using namespace std;

int main()
{
	vector<string> vec;
	string str;

	for(Test t; !(str = t()).empty();)
	{
		vec.push_back(str);
	}

	return 0;
}
