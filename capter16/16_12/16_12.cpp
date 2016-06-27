#include"Blob.h"
#include"BlobPtr.h"
#include<iostream>
#include<initializer_list>

using namespace std;

int main()
{
	Blob<int> test;
	Blob<int> test2 = {1, 2, 3, 4, 5, 6, 7};
	BlobPtr<int> p(test2, 0);
	cout << *p << endl;
	p++;
	cout << *p << endl;
	cout << boolalpha << test.empty() << endl;


	return 0;
}
