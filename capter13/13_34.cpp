#include<set>
#include<string>
#include"Message.h"
#include"Folder.h"

using namespace std;

int main()
{
	Folder f1, f2;
	Message m1("hello");
	Message m2("world");
	m1.add(f1);
	m2.add(f1);
	f2 = f1;
	{
		Message m3 = m1;
		f1.showMsg();
		f2.showMsg();
	}
	f1.showMsg();
	f2.showMsg();

	return 0;
}
