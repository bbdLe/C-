#include<vector>
#include<iostream>

using namespace std;

bool find(vector<int>::iterator begin, vector<int>::iterator end, int i)
{
	while(begin != end && *begin != i)
	{
		++begin;
	}

	if(begin != end)
		return true;
	else
		return false;
}

int main()
{
	vector<int> v{1, 2, 3, 4, 5};

	if(find(v.begin(), v.end(), 3))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}
