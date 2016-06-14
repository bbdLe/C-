#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> strv1 = {"11", "12", "13"};
	vector<string> strv2 = {".11", "0.11", "11e-2"};
	int total1 = 0;
	double total2 = 0;

	for(const string &str : strv1)
	{
		total1 += stoi(str);
	}

	for(const string &str : strv2)
	{
		total2 += stod(str);
	}

	cout << total1 << endl;
	cout << total2 << endl;
}
