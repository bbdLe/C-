#include<iostream>
#include<vector>
#include"13_13.h"

using namespace std;

int main()
{
	vector<X> vec;
	X a;
	X b(a);
	X c = b;
	c = b;
	vec.push_back(c);
	X *p = new X(c);
	delete p;

	return 0;
}
