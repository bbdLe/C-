#include <list>
#include <iostream>

using namespace std;

int main()
{
	list<int> lst = {1, 3, 5 ,7, 1, 3, 5, 7};
	lst.sort();
	lst.unique();
	for(auto i : lst)
	{
		cout << i << endl;
	}

	return 0;
}
