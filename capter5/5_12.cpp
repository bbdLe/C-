#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::noskipws;

int main()
{
	unsigned acnt, ecnt, icnt, ocnt, ucnt, spacecnt, tabcnt, newlinecnt;
	unsigned ffcnt, flcnt, ficnt;
	char ch, lastch;

	acnt = ecnt = icnt = ocnt = ucnt = spacecnt = tabcnt = newlinecnt = 0;
	ffcnt = flcnt = ficnt = 0;
	lastch = '\0';
	while(cin >> noskipws >> ch)
	{
		switch(ch)
		{
			case 'a':
			case 'A':
					acnt++;
					break;
			case 'e':
			case 'E':
					ecnt++;
					break;
			case 'i':
					if(lastch == 'f')
						ficnt++;
			case 'I':
					icnt++;
					break;
			case 'o':
			case 'O':
					ocnt++;
					break;
			case 'u':
			case 'U':
					ucnt++;
					break;
			case ' ':
					spacecnt++;
					break;
			case '\n':
					newlinecnt++;
					break;
			case '\t':
					tabcnt++;
					break;
			case 'f':
					if(lastch == 'f')
						ffcnt++;
					break;
			case 'l':
					if(lastch == 'f')
						flcnt++;
					break;
		}
		lastch = ch;
	}

	cout << "a : " << acnt << endl; 
	cout << "e : " << ecnt << endl; 
	cout << "i : " << icnt << endl; 
	cout << "o : " << ocnt << endl; 
	cout << "u : " << ucnt << endl;
	cout << "space : " << spacecnt << endl;
	cout << "tab : " << tabcnt << endl;
	cout << "newline : " << newlinecnt << endl;
	cout << "fl : " << flcnt << endl;
	cout << "ff : " << ffcnt << endl;
	cout << "fi : " << ficnt << endl;
	return 0;
}
