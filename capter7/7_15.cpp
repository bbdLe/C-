#include <iostream>
#include <string>
#include "Person.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	Person p1;
	Person p2("haha");
	Person p3("baichi", "ruozhilu");
	Person p4(cin);

	print(cout, p1) << endl;
	print(cout, p2) << endl;
	print(cout, p3) << endl;
	print(cout, p4) << endl;

	return 0;
}
