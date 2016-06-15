#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	map<string, vector<int>> m = {{"hello", {1, 2, 3, 4, 5}}};

	map<string, vector<int>>::iterator iter = m.find("hello");
	
	for(auto &i : iter->second)
		cout << i << endl;
	return 0;
}
