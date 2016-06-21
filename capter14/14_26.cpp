#include"String.h"
#include"StrVec.h"
#include<iostream>

using namespace std;

int main()
{
	String str("hahahahaha");
	str[2] = 'r';
	const String str1(str);

	cout << str << endl;

	StrVec sv;
	sv = {"hello", "world", "!"};

	cout << sv[1] << endl;
}
