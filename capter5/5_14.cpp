#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string maxWord, currWord, lastWord;
	int cnt = 0, max = 0;

	if(cin >> currWord)
	{
		++cnt;
		lastWord = currWord;
		while(cin >> currWord)
		{
			if(currWord == lastWord)
			{
				++cnt;
			}
			else
			{
				if(cnt > max)
				{
					max = cnt;
					maxWord = lastWord;
				}
				cnt = 1;
			}
			lastWord = currWord;
		}
		if(cnt > max)
		{
			max = cnt;
			maxWord = lastWord;
		}
		cout << "Word : " << maxWord << endl;
		cout << "Time : " << max << endl;
	}
	else
	{
		cout << "No Word" << endl;
	}

	return 0;
}
