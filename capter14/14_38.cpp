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

	for(string str; ifs >> str;)
		vec.push_back(str);

	for(int i = 1; i <= 10; i++)
		cout << "Length " << i << " : " <<count_if(vec.cbegin(), vec.cend(), Length(i)) << endl;

	return 0;

}
