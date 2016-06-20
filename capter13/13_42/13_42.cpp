#include<fstream>
#include<iostream>
#include"QueryResult.h"
#include"TextQuery.h"
#include"StrVec.h"


using namespace std;

int main()
{
	ifstream ifs("test");
	TextQuery tq(ifs);
	print(cout, tq.query("hello"));
}
