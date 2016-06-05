#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::begin;
using std::endl;
using std::end;


int main()
{
	int arr[4] = {1, 2, 3 ,4};
	auto b = begin(arr);
	auto e = end(arr);

	for(; b != e; b++)
	{
		*b = 0;
	}

	for(auto i : arr)
	{
		cout << i << endl;
	}
	
	return 0;
}
