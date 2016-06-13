#include<iostream>
#include<vector>

using namespace std;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int i)
{
	while(begin != end && *begin != i)
	{
		begin++;
	}

	if(begin != end)
	{
		return begin;
	}
	else
	{
		return end;
	}
}

int main()
{
	vector<int> v{1, 2, 3, 4};

	auto iterator = find(v.begin(), v.end(), 3);
	if(iterator != v.end())
	{
		cout << *iterator << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	
	return 0;
}
