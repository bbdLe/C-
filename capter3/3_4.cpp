#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main()
{
	string word1, word2;
	string::size_type size1, size2;

	while(cin >> word1 >> word2)
	{
		size1 = word1.size();
		size2 = word2.size();

		if(size1 == size2)
		{
			continue;
		}
		else if(size1 > size2)
		{
			cout << word1 << endl;
		}
		else
		{
			cout << word2 << endl;
		}
	}

	return 0;
}
