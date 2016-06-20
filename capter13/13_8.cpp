#include<string>
#include<iostream>
#include"13_8.h"

using namespace std;

int main()
{
	HasPtr a("hello, world"), b;
	b = a;

	cout << b.get() << endl;
	return 0;
}
