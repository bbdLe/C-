#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> v = {"hello ", "", "world"};
	
	for(auto b = v.begin(); b != v.end() && !b->empty(); b++)
	{
		for(auto &r : *b)
		{
			r = toupper(r);
		}
		cout << *b << endl;
	}

	return 0;
}
