#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v(10, 2);

	for(auto b = v.begin(); b != v.end(); b++)
	{
		*b *= 2;
	}

	for(auto b = v.begin(); b != v.end(); b++)
	{
		cout << *b << endl;
	}

	return 0;
}
