#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int v1 = 0, v2 = 0;
	int temp = 0;

	cin >> v1 >> v2;
	if(v1 > v2)
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	while(v1 <= v2)
	{
		cout << v1 << endl;
		v1++;
	}

	return 0;
}
