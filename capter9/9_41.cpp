#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> cv = {'h', 'e', 'l', 'l', 'o'};
	string str(cv.begin(), cv.end());

	cout << str << endl;
}
