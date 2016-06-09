#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int grade;
	vector<string> vstr = {"F", "D", "C", "B", "A", "A++"};
	string str;

	while(cin >> grade)
	{
		str = grade < 60? vstr[0] : vstr[(grade - 50) / 10];
		str += grade < 60 || grade == 100? "" : grade % 10 > 7? "+" : grade % 10 < 3? "-" : "";
		cout << str << endl;
	}
	return 0;
}
