// zadanie 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Sum(int tab[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += tab[i];
	}
	return sum;
	

}

int main()
{
	int const size = 5;
	int tab[size]={};

	std::cout << "podaj elementy tablicy: " << std::endl;
	
	for (int i = 0; i < size; i++)
	{
		std::cin >> tab[i];
	}



	std::cout << "tablica to : " << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << tab[i];
	}


	std::cout << std::endl;
	
	std::cout << "suma elementow tablicy to : " << std::endl;

	std::cout << Sum(tab, size) << std::endl;
	 
 }