#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ia[3][4] = {{1}, {2}, {3}};

	for(auto &r1 : ia)
		for(auto &r2 : r1)
			cout << r2 << endl;

	for(auto p1 = ia; p1 != ia + 3; p1++)
		for(auto p2 = *p1; p2 != *p1 + 4; p2++)
			cout << *p2 << endl;

	for(auto p1 = ia; p1 != &ia[3]; p1++)
		for(auto p2 = *p1; p2 != &(*p1)[4]; p2++)
			cout << *p2 << endl;

	return 0;
}
