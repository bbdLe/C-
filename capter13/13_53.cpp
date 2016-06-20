#include<string>
#include<iostream>
#include"13_53.h"

using namespace std;

void swap(HasPtr &a, HasPtr &b)
{
	using std::swap;

	swap(a.i, b.i);
	swap(a.ps, b.ps);
}

/*HasPtr &HasPtr::operator=(HasPtr b)
{
	swap(*this, b);
	return *this;
}*/


int main()
{
	HasPtr a("name");
	HasPtr b = a;
	HasPtr c;
	c = std::move(b);
}
