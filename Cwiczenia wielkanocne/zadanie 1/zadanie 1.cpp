//1. Program obliczaj�cy pole kwadratu.  Program jako dane (d�ugo�� boku) powinien przyjmowa� wy��cznie liczby dodatnie (if)
//

#include <iostream>

int main()
{
	double a = 0;

	std::cout << "podaj dlugo�� boku" << std::endl;
	std::cin >> a;

	if (a > 0)
	{
		a *= a;
		std::cout << "pole kwadratu: " << a << std::endl;

	}

		else
     	{ std::cout << "podaj liczbe wieksza od 0" << std::endl;

    	}


}
