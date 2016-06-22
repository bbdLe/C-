#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
#include"14_38.h"
#include<fstream>

using namespace std;

int main()
{
	ifstream ifs("test");
	vector<string> vec;	
	vector<int> lengths;
	int size = 0;

	for(string str; ifs >> str;)
		vec.push_back(str);

	for(int i = 1; i <= 10; i++)
		lengths.push_back(count_if(vec.cbegin(), vec.cend(), Length(i)));

	for_each(lengths.begin(), lengths.begin() + 9, [&size](int n) mutable {size += n;});
	cout << size << endl;
	size = 0;
	for_each(lengths.begin() + 9, lengths.end(), [&size](int n) mutable {size += n;});
	cout << size << endl;

	return 0;

}
