#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ConstStrBlobPtr.h"
#include <iostream>

using namespace std;

int main()
{
	StrBlob test;
	test.push("hello");
	test.push("world");

	cout << *test.cbegin() << endl;
}
