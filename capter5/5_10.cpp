#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	unsigned acnt, ecnt, icnt, ocnt, ucnt, othercnt;
	char ch;

	acnt = ecnt = icnt = ocnt = ucnt = othercnt = 0;
	while(cin >> ch)
	{
		if(isalpha(ch))
			ch = tolower(ch);
		switch(ch)
		{
			case 'a':
					acnt++;
					break;
			case 'e':
					ecnt++;
					break;
			case 'i':
					icnt++;
					break;
			case 'o':
					ocnt++;
					break;
			case 'u':
					ucnt++;
					break;
			default:
					othercnt++;
					break;
		}
	}

	cout << "a : " << acnt << endl; 
	cout << "e : " << ecnt << endl; 
	cout << "i : " << icnt << endl; 
	cout << "o : " << ocnt << endl; 
	cout << "u : " << ucnt << endl; 
	cout << "other : " << othercnt << endl;
	return 0;
}
