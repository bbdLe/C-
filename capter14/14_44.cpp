#include<map>
#include<functional>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	double a, b;
	string sym;

	map<string, function<double (double, double)>> funs = {{"*", multiplies<double>()},
														   {"/", divides<double>()},
														   {"-", minus<double>()},
														   {"+", plus<double>()}};
	
	while(cin)
	{
		cin >> a >> sym >> b;
		if(!cin)
		{
			break;
		}
		else
		{
			cout << funs[sym](a, b) << endl;
		}
	}
}
