#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
	forward_list<int> ifwl{1, 2, 3, 4, 5, 6, 7};
	auto prev = ifwl.before_begin();
	auto curr = ifwl.begin();
	while(curr != ifwl.end())
	{
		if(*curr % 2)
		{
			curr = ifwl.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	for(const auto &ri : ifwl)
	{
		cout << ri << endl;
	}

	return 0;
}
