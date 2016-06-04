#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	string str, astr;

	if(cin >> str)
	{
		for(auto c : str)
		{
			if(!ispunct(c))
			{
				astr += c;
			}
		}

		cout << astr << endl;
	}
	
	return 0;
}
