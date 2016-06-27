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
	BlobPtr<int> p2(test2, 3);
	cout << *p << endl;
	p++;
	cout << *p << endl;
	cout << boolalpha << test.empty() << endl;
	cout << boolalpha << (p < p2) << endl;
	cout << boolalpha << (p == p2) << endl;


	return 0;
}
