#include"StrVec.h"
#include"TextQuery.h"
#include"QueryResult.h"
#include"Query_base.h"
#include"Query.h"
#include"WordQuery.h"
#include"NotQuery.h"
#include"BinaryQuery.h"
#include"AndQuery.h"
#include"OrQuery.h"
#include"Queryhistory.h"
#include<memory>
#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ifstream ifs("test");
	Queryhistory his;

	auto q = ~Query("hello") & Query("world");
	his.push(q);
	print(cout, his[0].eval(ifs), 1, 8);
}
