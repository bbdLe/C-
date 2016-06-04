#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	string total, currVal;

	if(cin >> total)
	{
		while(cin >> currVal)
		{
			total += " " + currVal;
		}
		
		for(auto &c : total)
			c = toupper(c);

		cout << total << endl;
	}

	return 0;
}
