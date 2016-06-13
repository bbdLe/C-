#include <list>
#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
	list<int> intList{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	forward_list<int> intFwList(intList.begin(), intList.end());

	auto begin = intList.begin();
	while(begin != intList.end())
	{
		if(*begin % 2)
		{
			begin = intList.insert(begin, *begin);
			begin++;
			begin++;
		}
		else
		{
			begin = intList.erase(begin);
		}
	}

	auto fwlBegin = intFwList.begin();
	auto prev = intFwList.before_begin();
	while(fwlBegin != intFwList.end())
	{
		if(*fwlBegin % 2)
		{
			fwlBegin = intFwList.insert_after(fwlBegin, *fwlBegin);
			prev = fwlBegin;
			fwlBegin++;
		}
		else
		{
			fwlBegin = intFwList.erase_after(prev);
		}
	}

	for(auto &ri : intList)
	{
		cout << ri << endl;
	}

	cout << endl;

	for(auto &ri : intFwList)
	{
		cout << ri << endl;
	}

	return 0;
}
