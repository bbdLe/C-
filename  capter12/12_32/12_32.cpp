#include<iostream>
#include<fstream>
#include"TextQuery.h"
#include"QueryResult.h"

using namespace std;

void runQueries(ifstream &ifs)
{
	TextQuery tq(ifs);
	do
	{
		string word;
		cout << "Input the word you want to find" << endl;
		cin >> word;
		if(cin && word[0] != 'q')
			print(cout, tq.query(word));
		else
			break;
	}while(true);
}

int main()
{
	ifstream ifs("test");

	runQueries(ifs);

	return 0;
}
