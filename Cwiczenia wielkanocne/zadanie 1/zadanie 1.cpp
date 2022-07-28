//1. Program obliczaj¹cy pole kwadratu.  Program jako dane (d³ugoœæ boku) powinien przyjmowaæ wy³¹cznie liczby dodatnie (if)
//

#include <iostream>

int main()
{
	double a = 0;

	std::cout << "podaj dlugoœæ boku" << std::endl;
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
