

#include <iostream>

int main()
{
	int zmienna = 1;

	switch (zmienna)
	{
	case 1000:
		std::cout << "1000" << std::endl;

	case 100:
		std::cout << "100" << std::endl;

	case 10:
		std::cout << "10 " << std::endl;

	case -1:
		std::cout << "-1" << std::endl;
		break;

	case 0:
		std::cout << "0" << std::endl;
		break;

	case 23:
		std::cout << "23" << std::endl;
		break;

	default:
		std::cout << "jakas inna wartosc" << std::endl;
		break;
	}

	zmienna = 400;

	switch (zmienna)
	{
	case 404: //	if( zmienna == 404 || zmienna == 403 || zmienna == 405 || zmienna == 400)
	case 403:
	case 405:
	case 400:
		std::cout << "Jakas blad servera" << std::endl;
		break;
	case 303:
	case 301:
		std::cout << "Jakis blad z grupy 300" << std::endl;
		break;
	default:
		std::cout << "Jakis nieznany blad" << std::endl;
		break;
	}

	//tablica dwuwymiarowa 4 wiersze 6 kolumn
	int tab[4][6];

	//w wierszu 0 o kolumnie 6 jest wartosc 4
	tab[0][4] = 4;

	//stringi
	//std::string::

	int a = 5;
	int a = 6;


}



