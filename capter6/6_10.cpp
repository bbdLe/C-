#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int i = 10, j = 20;

	swap(&i, &j);
	cout << "i = " << i << ", j = " << j << endl;
	return 0;
}
