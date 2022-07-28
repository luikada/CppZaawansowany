
#include <iostream>
//Napisz program, który sprawdza czy podany przez u¿ytkownika rok jest przestêpny.
//Rok jest przestêpny, gdy jest podzielny przez 4 i nie jest podzielny przez 100 lub jest podzielny przez 400. 
//Np. 2012, 1996, 2000 to lata przestêpne, natomiast 1900, 2001, 1998 nie s¹ przestêpne.
int main()
{
	unsigned int year = 0;
	
	std::cout << "podaj rok : " << std::endl;
	std::cin >> year;
	
	if (year > 0)
	{
		int wynik = year % 4;
		int wynik_2 = year % 100;

		if ((wynik == 0) && (wynik_2 != 0))
		{
			std::cout << "podany rok jest przystepny " << std::endl;
		}
		else

			std::cout << "podany rok nie jest przystepny " << std::endl;

	}
	else 
		std::cout << "podaj poprawny rok"


}
