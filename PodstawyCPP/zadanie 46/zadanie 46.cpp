//Wczytaj od u¿ytkownika 6 liczb a nastêpnie zapisz je do tablicy dwuwymiarowej.
//Wypisz wartoœci tej tablicy w takiej formie :
//tab[0][0] - x
//tab[0][1] - y

//tab[1][2] - n

#include <iostream>

int main()
{

	const int sizeX = 2;
	const int sizeY = 3;
	int tab[sizeX][sizeY] = {};

	
		
	for (int i = 0; i < sizeX; i++)
	{
		for (int k = 0; i < sizeY; k++)
		{
			std::cout << "podaj tab" << std::endl;

		}
	}


	for (int i = 0; i < sizeX; i++)
	{
		for (int k = 0; i < sizeY; k++)
		{
			std::cout << "tab{" <<i<<"]["<<k<<"]="<<tab[i][k] << std::endl;

		}
	}
}