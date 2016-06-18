#include<fstream>
#include"TextQuery.h"
#include"QueryResult.h"

using namespace std;

int main()
{
	ifstream ifs("test");
	auto tq = TextQuery(ifs);
	
	auto result = tq.query("hello");
	print(cout, result);
	return 0;
}
