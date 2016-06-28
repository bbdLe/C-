#include"16_21.h"
#include<iostream>

using namespace std;

int main()
{
	DebugDelete delm;
	int *p = new int(10);
	delm(p);

	return 0;
}
