#include <string>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
	string test = "(((hh))h)";

	stack<char> stk;
	unsigned seen = 0;

	for(auto ch : test)
	{
		stk.push(ch);
		if(ch == '(')
		{
			++seen;
		}
		else if(ch == ')' && seen)
		{
			while(stk.top() != '(')
			{
				stk.pop();
			}
			stk.pop();
			--seen;
			stk.push('#');
		}
	}
	
	char temp;
	string str;
	while(!stk.empty())
	{
		char ch = stk.top();
		stk.pop();
		str += ch;
	}
	cout << str << endl;
}
