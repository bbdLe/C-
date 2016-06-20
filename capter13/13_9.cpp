#include<string>
#include<iostream>
#include"13_9.h"

using namespace std;

int main()
{
	HasPtr a("message");
	HasPtr b = a;
	a.change("hello");
	cout << b.get() << endl;
	cout << a.get() << endl;

	return 0;
}
