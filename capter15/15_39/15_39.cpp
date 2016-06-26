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
#include<memory>
#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ifstream ifs("test");

	auto q = ~Query("hello") & Query("world");
	print(cout, q.eval(ifs));
}
