#include<iostream>
#include<string>
#include"13_19.h"

using namespace std;

int main()
{
	Employee a("name");
	Employee b(a);
	b = a;

	return 0;
}
