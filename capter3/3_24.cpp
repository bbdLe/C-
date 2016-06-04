#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	int i;

	while(cin >> i)
		v.push_back(i);

	decltype(v.size()) size = v.size();
	if(size == 0)
	{
		cout << "Empty vector" << endl;
	}
	else if(size == 1)
	{
		cout << "Only one element" << endl;
	}
	else
	{
		for(auto b = v.begin(); b != v.end() - 1; b++)
		{
			cout << *b + *(b + 1) << endl;
		}
	}

	if(size == 0)
	{
		cout << "Empty vector" << endl;
	}
	else
	{
		decltype(v.begin()) half;
		if(size % 2 != 0)
		{
			half = v.begin() + size / 2 + 1;
		}
		else
		{
			half = v.begin() + size / 2;
		}

		for(auto l = v.begin(), e = v.end(); l != half; l++)
		{
			auto r = v.begin() + (e - l - 1);
			if(r == l)
			{
				cout << *r << endl;
			}
			else
			{
				cout << *l + *r << endl;
			}
		}
	}

	return 0;

	return 0;
}
