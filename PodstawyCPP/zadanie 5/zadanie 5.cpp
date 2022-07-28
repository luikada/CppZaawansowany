// zadanie 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int i = 100;
	int j = 200;
	{//blok 1
		int k = i + j;
		std::cout << "wynik 1 to" << k << std::endl;
		i++;
		j++;

		{//blok 2
			int k = i + j;
			std::cout << "wynik 2 to" << k << std::endl;
			i++;
			j++;

		}
	}


	int k = i + j;
	std::cout << "wynik 3 to" << k << std::endl;

}

