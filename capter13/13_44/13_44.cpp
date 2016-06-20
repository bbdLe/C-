#include"String.h"
#include<iostream>

using namespace std;

int main()
{
	String str1("shabi");
	String str2;
	String str3 = str1;
	cout << str1.c_str() << endl;
	str3 = str1;
}
