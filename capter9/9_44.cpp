#include <iostream>
#include <string>

using namespace std;

string &replace(string &str, string &oldstr, string &newstr)
{
	for(auto pos = str.find(oldstr); pos != string::npos; pos = str.find(oldstr))
	{
		str.replace(pos, oldstr.size(), newstr);
	}

	return str;
}

int main()
{
	string str1 = "thrusssssthru";
	string str2 = "thru";
	string str3 = "through";
	replace(str1, str2, str3);
	cout << str1 << endl;

	return 0;
}

