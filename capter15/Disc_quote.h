#ifndef _DISC_QUOTE_H
#define _DISC_QUOTE_H
#include"Quote.h"
#include<string>
#include<iostream>
class Disc_quote : public Quote
{
	public:
		Disc_quote() : Quote() 
		{
			std::cout << "Disc_quote()" << std::endl; 
		}

		Disc_quote(const std::string &book, double p, std::size_t qty, double dis) : Quote(book, p), quantity(qty), discount(dis)
		{
			std::cout << "Disc_quote(const std::string &, double, std::size, double)" << std::endl;
		}

		Disc_quote(const Disc_quote &other) : Quote(other), quantity(other.quantity), discount(other.discount)
		{
			std::cout << "Disc_quote(const Disc_quote &)" << std::endl;
		}

		Disc_quote &operator=(const Disc_quote &other)
		{
			Quote::operator=(other);
			quantity = other.quantity;
			discount = other.discount;

			std::cout << "Disc_quote::operator=(const Disc_quote &other)" << std::endl;
			return *this;
		}

		Disc_quote(Disc_quote &&other) : Quote(std::move(other)), quantity(std::move(other.quantity)), discount(std::move(other.discount))
		{
			std::cout << "Disc_quote(Disc_quote &&)" << std::endl;
		}

		~Disc_quote()
		{
			std::cout << "~Dics_quote()" << std::endl;
		}
		
		
		double net_price(std::size_t n) const = 0;

	protected:
		std::size_t quantity = 0;
		double discount = 0;
};
#endif
