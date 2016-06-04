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
	decltype(v.size()) size;
	decltype(v.size()) cnt;

	while(cin >> i)
	{
		v.push_back(i);
	}
	
	size = v.size();
	for(cnt = 0; cnt < size; cnt++)
	{
		cout << v[cnt] << endl;
	}
	return 0;
}
