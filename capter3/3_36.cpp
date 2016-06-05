#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

int main()
{
	int a[] = {1, 2, 3, 4};
	int b[] = {4, 2, 3, 4};
	vector<int> v1 = {1, 2, 3, 4};
	vector<int> v2 = {1, 4, 3, 4};
	auto b1 = begin(a);
	auto b2 = begin(b);
	auto e1 = end(a);
	auto e2 = end(b);
	bool same = false;

	if(e1 - b1 != e2 - b2)
	{
		same = false;
	}
	else
	{
		for(; b1 != e1 && b2 != e2; b1++, b2++)
		{
			if(*b1 == *b2)
				continue;
			else
				break;
		}
		if(b1 == e1 && b2 == e2)
		{
			same = true;
		}
		else
		{
			same = false;
		}
	}

	if(same)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}

	if(v1 == v2)
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}
	
	return 0;
}
