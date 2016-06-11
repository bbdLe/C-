#include <iostream>
#include <string>
#include "Screen.h"


using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	Screen newScreen(10, 10, 'c');

	cout << newScreen.move(20).get() << endl;
	return 0;
}
