#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	do
	{
		int v1, v2;
		cout << "Please input two number : " << endl;
		if(cin >> v1 >> v2)
			cout << "The sum is " << v1 + v2 << endl;
	}while(cin);

	return 0;
}
