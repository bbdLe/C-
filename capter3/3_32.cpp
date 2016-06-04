#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main()
{
	vector<int> v1;
	vector<int> v2;
	const unsigned nums = 10;
	int arr1[nums] = {};
	int arr2[nums];
	int i = 0;

	for(auto &data : arr1)
	{
		data = i;
		i++;
	}

	for(i = 0; i < nums; i++)
	{
		arr2[i] = arr1[i];
	}

	for(auto data : arr2)
	{
		cout << data << endl;
	}

	for(i = 0; i < nums; i++)
	{
		v1.push_back(i);
	}

	v2 = v1;

	for(auto data : v2)
	{
		cout << data << endl;
	}

	return 0;
}
