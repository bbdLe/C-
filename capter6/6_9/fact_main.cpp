#include <iostream>
#include "capter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i;

	if(cin >> i)
		cout << fact(i) << endl;

	return 0;
}
