#include<fstream>
#include<iostream>
#include"16_21.h"
#include"QueryResult.h"
#include"TextQuery.h"

int main()
{
	std::ifstream ifs("text");
	
	TextQuery tq(ifs);
	print(std::cout, tq.query("hello"));
	return 0;
}
