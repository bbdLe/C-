#ifndef _15_7_H
#define _15_7_H
#include"Quote.h"
#include<string>
class Test : public Quote
{
	public:
		Test() = default;
		Test(const std::string &book, double p, std::size_t qty, double dis) : Quote(book, p), min_qty(qty), discount(dis) {}
		double net_price(std::size_t n) const override
		{
			if(n >= min_qty)
				return price * n;
			else
				return price * n * (1 - discount);
		}

	private:
		std::size_t min_qty = 0;
		double discount = 0;
};
#endif
