#ifndef _QUOTE_H
#define _QUOTE_H
#include<string>
#include<iostream>
class Quote
{
	public:
		Quote() = default;
		Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
		std::string Isbn() const
		{
			return bookNo;
		}
		
		virtual double net_price(std::size_t n) const
		{
			return n * price;
		}

		virtual double debug() const
		{
			std::cout << "bookNO : " << bookNo << std::endl;
			std::cout << "price : " << price << std::endl;
		}

		private:
			std::string bookNo;
		protected:
			double price;
};

std::ostream &print_total(std::ostream &,const Quote &, std::size_t);
#endif
