#include <iostream>
#include <string>
#include "Person.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Person someone;
	if(read(cin, someone))
		print(cout, someone);
	
	return 0;
}
