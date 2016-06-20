#include<iostream>

using namespace std;

struct numbered
{
	numbered() : mysn(n++) {}

	static int n;
	int mysn;
};

int numbered::n = 10;

void print(numbered a)
{
	cout << a.mysn << endl;
}

int main()
{
	numbered a, b = a, c = b;
	print(a);
	print(b);
	print(c);

	return 0;
}
