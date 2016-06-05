#include <iostream>

using int_array = int[4];
using std::cout;
using std::endl;


int main()
{
	int ia[3][4] = {{1}, {2}, {3}};

	for(int_array &r1 : ia)
		for(int &r2 : r1)
			cout << r2 << endl;

	for(int_array *p1 = ia; p1 != ia + 3; p1++)
		for(int *p2 = *p1; p2 != *p1 + 4; p2++)
			cout << *p2 << endl;

	for(int_array *p1 = ia; p1 != &ia[3]; p1++)
		for(int *p2 = *p1; p2 != &(*p1)[4]; p2++)
			cout << *p2 << endl;

	return 0;
}
