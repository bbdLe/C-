#ifndef _7_57_H
#define _7_57_H
#include <string>
class Account
{
	public:
		static double rate() {return interestRate;}
		static double rate(double rate) {interestRate = rate;}
		void calculate() {amount += interestRate * amount;}

	private:
		std::string owner;
		static double interestRate;
		static constexpr int period = 20;
		double amount = 1000;
		static double initRate();
		double daily_tbl[period] = {0};
};
#endif
