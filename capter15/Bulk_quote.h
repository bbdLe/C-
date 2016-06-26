#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H
#include"Disc_quote.h"
#include<string>
#include<iostream>
class Bulk_quote : public Disc_quote
{
	public:
		using Disc_quote::Disc_quote;
		
		Bulk_quote() : Disc_quote()
		{
			std::cout << "Bulk_quote()" << std::endl;
		}

		/*Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Disc_quote(book, p, qty, disc)
		{
			std::cout << "Bulk_quote(const std::string &, double, std::size_t, double)" << std::endl;
		}*/

		Bulk_quote(const Bulk_quote &other) : Disc_quote(other)
		{
			std::cout << "Bulk_quote(const Bulk_quote &)" << std::endl;
		}

		Bulk_quote(Bulk_quote &&other) : Disc_quote(std::move(other))
		{
			std::cout << "Bulk_quote(Bulk_quote &&other)" << std::endl;
		}

		~Bulk_quote()
		{
			std::cout << "~Bulk_quote" << std::endl;
		}

		Bulk_quote &operator=(const Bulk_quote &other)
		{
			Disc_quote::operator=(other);
			std::cout << "Bulk_quote &operator=(const Bulk_quote &)" << std::endl;
			return *this;
		}

		Quote *clone() const & override
		{
			return new Bulk_quote(*this);
		}

		Quote *clone() && override
		{
			return new Bulk_quote(std::move(*this));
		}
	
		double net_price(std::size_t sz) const override
		{
			if(sz >= quantity)
				return sz * price * (1 - discount);
			else
				return sz * price;
		}
};
#endif
