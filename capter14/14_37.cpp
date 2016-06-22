#include<vector>
#include<algorithm>
#include<iostream>
#include"14_36.h"

using namespace std;

int main()
{
	vector<int> vec;
	Test t(10);

	for(int i = 0; i <= 10; ++i)
		vec.push_back(i);
	
	replace_if(vec.begin(), vec.end(), t, 20);
	for(auto &i : vec)
		cout << i << endl;
}
