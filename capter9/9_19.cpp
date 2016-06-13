#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<string> strd;
	string str;

	while(cin >> str)
	{
		strd.push_front(str);
	}

	for(auto &s : strd)
	{
		cout << s << endl;
	}

	return 0;
}
