#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>

struct Sales_data
{
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend std::istream &read(std::istream &is, Sales_data &book);
	friend std::ostream &print(std::ostream &os, const Sales_data &book);

	public:
		Sales_data() = default;
		Sales_data(const std::string &s) : bookNo(s) {};
		Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n){};
		Sales_data(std::istream &);
		Sales_data &combine(const Sales_data &other)
		{
			units_sold += other.units_sold;
			revenue += other.revenue;
			return *this;
		}

		std::string isbn() const
		{
			return bookNo;
		}

	private:
		std::string bookNo;
		double revenue = 0;
		unsigned units_sold = 0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &book);
std::ostream &print(std::ostream &os, const Sales_data &book);

#endif
