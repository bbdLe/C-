#include<vector>
#include<list>
#include<iostream>

using namespace std;

int main()
{
	vector<int> iv = {1, 2, 3, 4, 5};
	list<int> il = {1, 2, 3, 4, 5};

	cout << boolalpha << (vector<int>(il.begin(), il.end()) == iv) << endl;
}
