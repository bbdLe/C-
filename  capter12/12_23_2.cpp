#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	string str1 = "hello,";
	string str2 = "world!";

	char *p = new char[str1.size() + str2.size() + 1];
	strcpy(p, str1.c_str());
	strcpy(p + str1.size(), str2.c_str());

	cout << p << endl;
	delete [] p;
}
