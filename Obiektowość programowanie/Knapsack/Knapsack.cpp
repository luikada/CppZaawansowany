#include "Knapsack.hpp"
#include <random>

Shop::Shop()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distr(0, 10);

for (int i =0; i<9; i++)

	items[i]=distr(gen);

}

Item Shop::steal(int index)
{
	return Item();
}

Item Shop::peek(int index)
{
	return Item();
}

