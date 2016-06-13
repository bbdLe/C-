#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	list<int> intList(begin(ia), end(ia));
	vector<int> intVector(begin(ia), end(ia));

	auto beginList = intList.begin();
	while(beginList != intList.end())
	{
		if(*beginList % 2)
		{
			beginList = intList.erase(beginList);
		}
		else
		{
			++beginList;
		}
	}

	auto beginVector = intVector.begin();
	while(beginVector != intVector.end())
	{
		if(*beginVector % 2 == 0)
		{
			beginVector = intVector.erase(beginVector);
		}
		else
		{
			++beginVector;
		}
	}

	for(const auto &ri : intList)
	{
		cout << ri << endl;
	}

	cout << endl;

	for(const auto &ri : intVector)
	{
		cout << ri << endl;
	}
	return 0;
}
