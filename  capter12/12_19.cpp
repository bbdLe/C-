#include<vector>
#include<string>
#include<memory>
#include<stdexcept>
#include<initializer_list>
#include<iostream>
#include"StrBlobPtr.h"
#include"StrBlob.h"

using namespace std;

int main()
{
	StrBlob test({"hello", "world", "!"});
	auto begin = test.begin();
	auto end = test.end();
	begin != end;
	cout << begin.deref() << endl;
	return 0;
}
