#include "StrBlob.h"
#include "StrBlobPtr.h"
#include <iostream>

using namespace std;

int main()
{
	StrBlob test;
	test.push("hello");
	test.push("good");
	test.push("fuck");
	auto begin = test.begin();
	begin++;
	begin--;
	++begin;
	--begin;
	cout << ((begin + 2) - 2).deref() << endl;
}
