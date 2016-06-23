#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H
#include"Disc_quote.h"
#include<string.h>
class Bulk_quote : public Disc_quote
{
	public:
		Bulk_quote() = default;
		Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Disc_quote(book, p, qty, disc) {}
	
		double net_price(std::size_t sz) const override
		{
			if(sz >= quantity)
				return sz * price * (1 - discount);
			else
				return sz * price;
		}
};
#endif
