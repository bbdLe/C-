#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int num)
{
	return num > 0? num : -num;
}

int main()
{
	int i;

	if(cin >> i)
		cout << abs(i) << endl;
	return 0;
}
