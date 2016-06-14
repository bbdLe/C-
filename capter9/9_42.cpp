#include <string>
#include <iostream>

using namespace std;

int main()
{
	string str;
	str.reserve(100);

	cout << str.capacity() << endl;

	for(int i = 0; i < 100; i++)
	{
		str.push_back('a');
	}

	cout << str.capacity() << endl;

	return 0;
}
