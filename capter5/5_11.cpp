#include <iostream>
#include <cctype>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	unsigned acnt, ecnt, icnt, ocnt, ucnt, othercnt, spacecnt, tabcnt, newlinecnt;
	string str;

	acnt = ecnt = icnt = ocnt = ucnt = othercnt = 0;
	spacecnt = newlinecnt = tabcnt = 0;
	while(getline(cin, str))
	{
		for(auto ch : str)
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
				case ' ':
						spacecnt++;
						break;
				case '\t':
						tabcnt++;
						break;
				default:
						othercnt++;
						break;
			}
		}
		newlinecnt++;
	}

	cout << "a : " << acnt << endl; 
	cout << "e : " << ecnt << endl; 
	cout << "i : " << icnt << endl; 
	cout << "o : " << ocnt << endl; 
	cout << "u : " << ucnt << endl;
	cout << "other : " << othercnt << endl;
	cout << "space : " << spacecnt << endl;
	cout << "tab : " << tabcnt << endl;
	cout << "newline : " << newlinecnt << endl;
	return 0;
}
