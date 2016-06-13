#include<vector>
#include<iostream>

using namespace std;

int main()
{
	vector<int> intv;

	cout << intv.at(0) << endl;
	cout << *intv.begin() << endl;
	cout << intv.front() << endl;
	return 0;
}
