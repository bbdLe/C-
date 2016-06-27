#include<iostream>
#include"16_6.h"

using namespace std;

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(auto b = ::begin(arr), e = ::end(arr); b != e; ++b)
	{
		cout << *b << endl;
	}
}
