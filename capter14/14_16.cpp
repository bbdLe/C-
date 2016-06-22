#include "StrVec.h"
#include "String.h"
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	StrVec a, b, c;

	a.push_back("hello");
	b.push_back("goodbye");
	c.push_back("hello");

	cout << boolalpha << (a == b) << endl;
	cout << boolalpha << (a == c) << endl;

	String str1("hello");
	String str2("good");
	String str3("hello");

	cout << boolalpha << strcmp(str1.c_str(), str2.c_str()) << endl;
	cout << str2.c_str() << endl;
	cout << str3.c_str() << endl;

	cout << boolalpha << (str1 == str2) << endl;
	cout << boolalpha << (str1 != str2) << endl;
}
