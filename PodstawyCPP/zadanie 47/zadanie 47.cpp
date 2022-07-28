//Stwórz tablicê dwuwymiarow¹ 3x5, która przechowa wartoœci od 1 do 15. 
//tak ¿e[0][0] ma mieæ wartoœæ 1 a[2][4] 15. 
//Nastêpnie wypisz t¹ tablicê dziel¹c j¹ na wiersze :
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15

#include <iostream>

int main()
{

	const int sizeX = 3;
	const int sizeY = 5;
	int tab[sizeX][sizeY] = {};

	int num = 1;

	for (int i = 0; i < sizeX; i++)
	{
		for (int k = 0; k < sizeY; k++)
		{
			tab[i][k] = num;
			num++;

		}
	}

	for (int i = 0; i < sizeX; i++)
	{
		for (int k = 0; i < sizeY; k++)
		{
			std::cout << tab[i][k] <<" ";
			
		}
		std::cout << std::endl;   //dzieli na wiersze w konsoli
	}
}
