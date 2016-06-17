#include<vector>
#include<iostream>
#include<stdexcept>
#include<string>
#include<memory>
#include"ConstStrBlobPtr.h"
#include"StrBlob.h"

using namespace std;

int main()
{
	StrBlob test{"hello", "world", "!"};

	for(auto cbegin = test.cbegin(), cend = test.cend(); cbegin != cend; cbegin.incr())
	{
		cout << cbegin.deref() << endl;
	}
}
