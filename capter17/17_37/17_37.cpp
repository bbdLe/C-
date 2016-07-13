#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream ifs("test1");
	char str[20];


	while(ifs)
	{
		ifs.getline(str, 20);
		cout << str << endl;
	}
}
