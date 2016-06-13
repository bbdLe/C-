#include <list>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	list<int> intlist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	deque<int> intdeque1, intdeque2;

	for(auto begin = intlist.cbegin(), end = intlist.cend(); begin != end; begin++)
	{
		if(*begin % 2)
		{
			intdeque1.push_front(*begin);
		}
		else
		{
			intdeque2.push_front(*begin);
		}
	}

	for(const auto &i : intdeque1)
	{
		cout << i << endl;
	}

	for(const auto &i : intdeque2)
	{
		cout << i << endl;
	}

	return 0;
}
