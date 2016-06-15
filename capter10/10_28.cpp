#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
	deque<int> deq1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	deque<int> deq2, deq3, deq4;

	copy(deq1.cbegin(), deq1.cend(), inserter(deq2, deq2.begin())); // 1 2 3 4 5 6 7 8 9
	copy(deq1.cbegin(), deq1.cend(), back_inserter(deq3)); // 1 2 3 4 5 6 7 8 9
	copy(deq1.cbegin(), deq1.cend(), front_inserter(deq4)); // 9 8 7 6 5 4 3 2 1

	for(auto i : deq2)
	{
		cout << i << endl;
	}

	for(auto i : deq3)
	{
		cout << i << endl;
	}
	
	for(auto i : deq4)
	{
		cout << i << endl;
	}

	return 0;
}
