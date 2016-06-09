#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string arr[10] = {"hello"};

string (&f())[10]
{
	return arr;
}

int main()
{
	string arr[10] = f();

	for(auto &str : arr)
	{
		cout << str << endl;
	}
	return 0;
}
