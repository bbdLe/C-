#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void recuRector(vector<int>::iterator begin, vector<int>::iterator end)
{	
	if(begin != end)
	{
		recuRector(begin + 1, end);
		#ifndef NDEBUG
		cout << "size : " << end - begin << endl;
		#endif
		cout << *begin << endl;
	}
}

int main()
{
	vector<int> v{1, 2, 3, 4};
	recuRector(v.begin(), v.end());

	return 0;
}
