#include"DebugDelete.h"
#include"Shared_ptr.h"
#include"Unique_ptr.h"
#include<iostream>

using namespace std;

int main()
{
	MySharedPtr<int> p1(new int(10), DebugDelete());
	MySharedPtr<int> p2(new int(11), DebugDelete());
	MyUniquePtr<int> p3(new int(12));
	MyUniquePtr<int> p4 = p3;

	p2 = p1;
}
