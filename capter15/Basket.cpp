#include"Basket.h"
#include<iostream>
using namespace std;

double Basket::total_receipt(ostream &os) const
{
	double total = 0;

	for(auto b = items.begin(); b != items.end(); b = items.upper_bound(*b))
	{
		total += print_total(os, **b, items.count(*b));
	}
	os << "Total : " << total << endl;
	return total;
}
