#include<string>
#include<iostream>

using namespace std;

void iFind1(const string &str)
{
	string::size_type pos = 0;
	string target = "0123456789";
	while((pos = str.find_first_of(target, pos)) != string::npos)
	{
		cout << "position " << pos << " is " << str[pos] << endl;
		++pos;
	}

	pos = 0;
	target = "ABCDEFGHIJKLMNOPQRSTUVWSYZabcdefghijklmnopqrstuvwsyz";
	while((pos = str.find_first_of(target, pos)) != string::npos)
	{
		cout << "position " << pos << " is " << str[pos] << endl;
		++pos;
	}

	cout << endl;

	pos = 0;
	while((pos = str.find_first_not_of(target, pos)) != string::npos)
	{
		cout << "position " << pos << " is " << str[pos] << endl;
		++pos;
	}

	target = "0123456789";
	pos = 0;
	while((pos = str.find_first_not_of(target, pos)) != string::npos)
	{
		cout << "position " << pos << " is " << str[pos] << endl;
		++pos;
	}
}

int main()
{
	iFind1("ab2c3d7R4E6");

	return 0;
}
