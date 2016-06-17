#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	const char *str1 = "hello,";
	const char *str2 = "world!";

	unsigned n = strlen(str1) + strlen(str2) + 1;
	char *p = new char[n];
	strncat(p, str1, n - 1);
	strncat(p + strlen(str1), str2, n - strlen(str1) - 1);

	cout << p << endl;
	delete [] p;
}
