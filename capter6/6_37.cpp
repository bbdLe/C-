#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using arrT = string[10];


string arr[10] = {"hello"};

auto f1() -> string (&)[10]
{
	return arr;
}

decltype(arr) &f2()
{
	return arr;
}

arrT &f3()
{
	return arr;
}

int main()
{
	string array[10] = f3();

	for(auto &s : array)
		cout << s << endl;

	return 0;
}
