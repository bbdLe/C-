#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>

struct Sales_data
{
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend std::istream &read(std::istream &is, Sales_data &book);
	friend std::ostream &print(std::ostream &os, const Sales_data &book);
	friend std::istream &operator>>(std::istream &is, Sales_data &item);

	public:
		Sales_data(const std::string &s);
		Sales_data(const std::string &s, unsigned n, double p);
		Sales_data(std::istream &);
		Sales_data();

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
		double avg_price() const;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &book);
std::ostream &print(std::ostream &os, const Sales_data &book);

inline double Sales_data::avg_price() const
{
	if(this->units_sold != 0)
		return revenue / units_sold;
	else
		return 0;
}

#endif
