#include "Knapsack.hpp"
#include <iostream>

int main()
{
	Robber robber(30);
	Shop shop;
	robber.robWhatever(shop);
	std::cout << robber.getValue() << std::endl;
	return 0;
}
