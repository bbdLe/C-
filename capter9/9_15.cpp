#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1 = {1, 2, 3, 4, 5};
	vector<int> v2 = {3, 4, 5, 6, 7};

	cout << boolalpha << (v1 == v2) << endl;
	return 0;
}
