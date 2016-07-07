#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>
#include <vector>
#include <tuple>

struct Sales_data
{
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend std::istream &read(std::istream &is, Sales_data &book);
	friend std::ostream &print(std::ostream &os, const Sales_data &book);
	friend std::istream &operator>>(std::istream &is, Sales_data &item);
	friend std::ostream &operator<<(std::ostream &os, const Sales_data &item);
	friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
	friend bool compareIsbn(const Sales_data &, const Sales_data &);
	

	public:
		Sales_data(const std::string &s);
		Sales_data(const std::string &s, unsigned n, double p);
		Sales_data(std::istream &);
		Sales_data();
		Sales_data &operator+=(const Sales_data &);
		Sales_data &operator=(const std::string &);

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
std::ostream &operator<<(std::ostream &os, const Sales_data &item);
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);

inline double Sales_data::avg_price() const
{
	if(this->units_sold != 0)
		return revenue / units_sold;
	else
		return 0;
}

typedef std::tuple<std::vector<Sales_data>::size_type, std::vector<Sales_data>::const_iterator, std::vector<Sales_data>::const_iterator> matches; 

#endif
