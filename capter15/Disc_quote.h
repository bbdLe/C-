#ifndef _DISC_QUOTE_H
#define _DISC_QUOTE_H
#include"Quote.h"
#include<string>
class Disc_quote : public Quote
{
	public:
		Disc_quote() = default;
		Disc_quote(const std::string &book, double p, std::size_t qty, double dis) : Quote(book, p), quantity(qty), discount(dis) {}
		double net_price(std::size_t n) const = 0;

	protected:
		std::size_t quantity = 0;
		double discount = 0;
};
#endif
