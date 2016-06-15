#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	auto iter = find(lst.crbegin(), lst.crend(), 0);
	cout << *iter << endl;
}
