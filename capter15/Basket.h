#ifndef _BASKET_H
#define _BASKET_H
#include<set>
#include<memory>
#include<iostream>
#include"Quote.h"
class Basket
{
	public:
		void addItem(const Quote &sale)
		{
			items.insert(std::shared_ptr<Quote>(sale.clone()));
		}

		void addItem(Quote &&sale)
		{
			items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
		}

		double total_receipt(std::ostream &) const;

	private:
		static bool compare(const std::shared_ptr<Quote> &p1, const std::shared_ptr<Quote> &p2)
		{
			return p1->Isbn() < p2->Isbn();
		}

		std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
};
#endif
