#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ConstStrBlobPtr.h"
#include "14_32.h"
#include <iostream>

using namespace std;

int main()
{
	StrBlob test;
	test.push("hello");
	test.push("world");

	auto begin = test.begin();
	Test t(begin);
	cout << t->size() << endl;
	return 0;
}
