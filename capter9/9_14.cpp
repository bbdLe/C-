#include<list>
#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	list<const char *> lc = {"hello", "world", "!"};
	vector<string> vs;
	vector<string> vs2 = {"ruozhi", "baichi"};
	vs.assign(lc.begin(), lc.end());
	swap(vs, vs2);

	return 0;
}
