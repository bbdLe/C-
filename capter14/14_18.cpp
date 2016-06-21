#include "StrVec.h"
#include "String.h"
#include <iostream>
using namespace std;

int main()
{
	StrVec v1, v2;
	v1.push_back("hello");
	v1.push_back("world");
	v2.push_back("hello");
	v2.push_back("world");
	v2.push_back("!");

	cout << boolalpha << (v1 < v2) << endl;

	String str1("hello");
	String str2("hello!");
	String str3("bye");

	cout << boolalpha << (str1 < str2) << endl;
	cout << boolalpha << (str1 < str3) << endl;
	cout << boolalpha << (str1 < str1) << endl;
}
