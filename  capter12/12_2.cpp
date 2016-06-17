#include<string>
#include<memory>
#include<vector>
#include<initializer_list>
#include<iostream>
#include"StrBlob.h"

using namespace std;

int main()
{
	StrBlob test({"hello", "world", "!"});
	cout << test.back() << endl;
	cout << test.front() << endl;
	return 0;
}
