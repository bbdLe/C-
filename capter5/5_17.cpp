#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1, v2, temp;
	int i;


	while(cin >> i)
		v1.push_back(i);

	cin.clear();
	while(cin >> i)
		v2.push_back(i);

	if(v1.size() > v2.size())
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}

	cout << "v1 : " << endl;
	for(auto i : v1)
		cout << i << endl;

	cout << "v2 : " << endl;
	for(auto i : v2)
		cout << i << endl;

	auto b1 = v1.begin(), b2 = v2.begin();
	for(; b1 != v1.end() && b2 != v1.end() && *b1 == *b2; b1++, b2++);

	if(b1 == v1.end())
	{
		cout << "Same" << endl;
	}
	else
	{
		cout << "Different" << endl;
	}

	return 0;
}
