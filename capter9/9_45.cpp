#include <iostream>
#include <string>

using namespace std;

void add(string &str, string &begin, string &end)
{
	str.insert(str.begin(), begin.begin(), begin.end());
	str.append(end.begin(), end.end());
}

int main()
{
	string str = "Mike";
	string begin = "Mr";
	string end = "Jr.";
	add(str, begin, end);
	cout << str << endl;
}
