//Stw�rz tablic� dwuwymiarow� 3x5, kt�ra przechowa warto�ci od 1 do 15. 
//tak �e[0][0] ma mie� warto�� 1 a[2][4] 15. 
//Nast�pnie wypisz t� tablic� dziel�c j� na wiersze :
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
