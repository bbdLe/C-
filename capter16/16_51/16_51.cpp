#include"16_51.h"
#include<string>

using namespace std;

int main()
{
	int i = 0;
	double d = 3.14;
	string s = "how now brown cow";
	foo(i, s, 42, d);
	foo(s, 42, "hi");
	foo(d, s);
	foo("hi");
}
