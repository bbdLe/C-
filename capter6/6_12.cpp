#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &i, int &j)
{
	int temp = i;
	i = j;
	j = temp;
}

int main()
{
	int i = 10, j = 20;
	swap(i, j);
	cout << i << endl;
	cout << j << endl;
	return 0;
}
