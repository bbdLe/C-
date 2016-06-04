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

	if(v.size() == 0)
	{
		cout << "Don't have element" << endl;
	}
	else if(v.size() == 1)
	{
		cout << "Only one element" << endl;
	}
	else
	{
		decltype(v.size()) cnt = 0;
		decltype(v.size()) size = v.size();
		for(; cnt != size - 1; cnt++)
			cout << v[cnt] + v[cnt + 1] << endl;
	}

	cout << endl;

	decltype(v.size()) size = v.size();
	decltype(v.size()) half;
	if(size % 2 != 0)
		half = size / 2;
	else
		half = size / 2 - 1;
	for(decltype(v.size()) left = 0; left <= half; left++)
	{
		decltype(v.size()) right = size - left - 1;
		if(left == right)
		{	
			cout << v[left] << endl;
		}
		else
		{
			cout << v[left] + v[right] << endl;
		}
	}

	return 0;
}
