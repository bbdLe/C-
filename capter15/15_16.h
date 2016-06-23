#ifndef _15_16_H
#define _15_16_H
#include"Disc_quote.h"
#include<string>
class Test : public Disc_quote
{
	public:
		Test() = default;
		Test(const std::string &book, double p, size_t n, double disc) : Disc_quote(book, p, n, disc) {}
		double net_price(std::size_t n) const override
		{
			if(n >= quantity)
			{
				return (n - quantity) * price * (1 - discount) + quantity * price;
			}
			else
			{
				return n * price;
			}
		}
};
#endif
