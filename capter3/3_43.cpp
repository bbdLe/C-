#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[3][4] = {{1}, {2}, {3}};

	for(int (&r1)[4] : ia)
		for(int &r2 : r1)
			cout << r2 << endl;

	for(int (*s1)[4] = ia; s1 != ia + 3; s1++)
		for(int *s2 = *s1; s2 != *s1 + 4; s2++)
			cout << *s2 << endl;

	for(int (*s1)[4] = ia; s1 != &ia[3]; s1++)
		for(int *s2 = *s1; s2 != &(*s1)[4]; s2++)
			cout << *s2 << endl;
}
