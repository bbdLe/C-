#ifndef _QUOTE_H
#define _QUOTE_H
#include<string>
#include<iostream>
class Quote
{
	public:
		Quote()
		{
			std::cout << "Quote()" << std::endl;
		}
		Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price)
		{
			std::cout << "Quote(const std::string &book, doule sales_price" << std::endl;
		}

		Quote(const Quote &other) : bookNo(other.bookNo), price(other.price)
		{
			std::cout << "Quote(const Quote &)" << std::endl;
		}

		Quote(Quote &&other) : bookNo(std::move(other.bookNo)), price(std::move(other.price))
		{
			std::cout << "Quote(Quote &&)" << std::endl;
		}

		~Quote()
		{
			std::cout << "~Quote()" << std::endl;
		}

		Quote &operator=(const Quote &other)
		{
			bookNo = other.bookNo;
			price = other.price;
			std::cout << "Quote::operator=(const Quote &)" << std::endl;
			return *this;
		}

		virtual Quote *clone() const &
		{
			return new Quote(*this);
		}

		virtual Quote *clone() &&
		{
			return new Quote(std::move(*this));
		}

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

double print_total(std::ostream &,const Quote &, std::size_t);
#endif
