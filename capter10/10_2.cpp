#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	list<string> lst = {"hello", "world", "!", "world", "hello"};

	cout << count(lst.begin(), lst.end(), "world") << endl;
	return 0;
}
