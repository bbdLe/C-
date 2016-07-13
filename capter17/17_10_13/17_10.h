#ifndef _17_10_H
#define _17_10_H
#include<utility>
#include<string>
#include<iostream>
#include<bitset>

template<std::size_t N> class Quiz
{
	template <std::size_t M> friend std::size_t grade(const Quiz<M> &, const Quiz<M> &);
	public:
		Quiz() = default;
		Quiz(const std::string &str) : bitquiz(str) {}

	void update(std::size_t index, bool result)
	{
		bitquiz.reset(index, result);
	}

	private:
		std::bitset<N> bitquiz;
};

template<std::size_t M> inline std::size_t grade(const Quiz<M> &ans, const Quiz<M> &stuans)
{
	auto g = ans.bitquiz ^ stuans.bitquiz;
	g.flip();
	return g.count();
}

#endif
