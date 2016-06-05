#include<iostream>

using std::endl;
using std::cin;
using std::cout;

int main()
{
	int a, b, c, d;

	while(cin >> a >> b >> c >> d)
	{
		if(a > b && b > c && c > d)
			break;
		else
			continue;
	}

	return 0;
}
