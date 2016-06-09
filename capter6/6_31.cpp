#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int &get(int *arr, int index)
{
	return arr[index];
}

int main()
{
	int arr[10];

	for(int i = 0; i != 10; i++)
	{
		get(arr, i) = i;
	}

	for(auto &i : arr)
		cout << i << endl;

	return 0;
}
