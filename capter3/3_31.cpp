#include <iostream>

using std::cout;
using std::endl;


int main()
{
	int arr[10] = {};
	int i = 0;

	for(auto &data : arr)
	{
		data = i;
		i++;
	}

	for(auto data : arr)
	{
		cout << data << endl;
	}

	return 0;
}
