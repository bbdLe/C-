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

int interaction()
{
	int i;

	if(cin >> i)
		return fact(i);
	else
		return -1;
}

int main()
{
	int i;

	cout << interaction() << endl;

	return 0;
}
