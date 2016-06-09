#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int num)
{
	int sum = 1;
	while(num > 1)
		sum *= num--;
	return sum;
}

int main()
{
	int i;

	if(cin >> i)
	{
		int sum = fact(i);
		cout << "fact(" << i << ") = " << sum << endl;
	}

	return 0;
}
