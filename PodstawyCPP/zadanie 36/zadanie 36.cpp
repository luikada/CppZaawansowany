// zadanie 36.cpp : 
// Program który wypisuje liczbê ca³kowit¹ (0-10) w postaci s³ownej.

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "podaj liczbe od 0-10" << std::endl;
	std::cin >> num;

	switch (num)
	{
	case 0:
		std::cout << "zero" << std::endl;
		break;
	case 1:
		std::cout << "jeden" << std::endl;
		break;
	case 2:
		std::cout << "dwa" << std::endl;
		break;
	case 3:
		std::cout << "trzy" << std::endl;
		break;
	case 4:
		std::cout << "cztery" << std::endl;
		break;
	case 5:
		std::cout << "piec" << std::endl;
		break;
	case 6:
		std::cout << "szesc" << std::endl;
		break;
	case 7:
		std::cout << "siedem" << std::endl;
		break;
	case 8:
		std::cout << "osiem" << std::endl;
		break;
	case 9:
		std::cout << "dziewiec" << std::endl;
		break;
	case 10:
		std::cout << "dziesiec" << std::endl;
		break;
	default:
		std::cout << "podaj liczbe z przedzialu 0-10" << std::endl;
		break;

	}
}

