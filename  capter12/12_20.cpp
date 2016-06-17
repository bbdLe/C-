#include<string>
#include<iostream>
#include<string>
#include<fstream>
#include"StrBlob.h"
#include"StrBlobPtr.h"

using namespace std;

int main()
{
	string str;
	ifstream ifs("test");
	StrBlob strB;

	while(ifs >> str)
		strB.push(str);

	auto begin = strB.begin(), end = strB.end();
	while(begin != end)
	{
		cout << begin.deref() << endl;
		begin.incr();
	}

	return 0;
}

