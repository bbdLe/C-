#include"StrBlob.h"
#include"ConstStrBlobPtr.h"
#include"StrBlobPtr.h"
#include<iostream>
using namespace std;

int main()
{
	StrBlob b;
	{
	StrBlob a = {"hello", "world", "!"};
	b = a;
	}
	for(auto begin = b.begin(), end = b.end(); begin != end; begin.incr())
	{
		cout << begin.deref() << endl;
	}
}
