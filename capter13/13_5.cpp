#include<string>
#include<iostream>
#include"13_5.h"

using namespace std;

void f(HasPtr b)
{
	cout << b.get() << endl;
}

int main()
{
	HasPtr a("hello, world");
	f(a);

	return 0;
}
