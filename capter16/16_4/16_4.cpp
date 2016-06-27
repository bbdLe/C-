#include<vector>
#include<iostream>
#include<list>
#include"16_4.h"

using namespace std;

int main()
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
	list<int> l{1, 2, 3, 4, 5, 6, 7 , 8};
	auto iter1 = find(v.begin(), v.end(), 6);
	auto iter2 = find(l.begin(), l.end(), 5);
	if(iter1 != v.end())
		cout << *iter1 << endl;
	if(iter2 != l.end())
		cout << *iter2 << endl;
}

