#include <utility>
#include <string>
#include <iostream>

using namespace std;

using type = pair<string, int>; 

int main()
{
	string str = "bye";
	int num = 10;

	type p1(str, num);
	type p2 = {str, num};
	type p3 = make_pair(str, num);
}
