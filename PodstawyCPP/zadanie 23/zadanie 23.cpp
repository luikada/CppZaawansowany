// Napisz program kalkulator, który bêdzie wczytywa³ od u¿ytkownika dwie liczby rzeczywiste i znak operacji do wykonania
//(+, -, *, / ).Wynik wypisz na konsole.
//Uwaga na dzielenie : ).

#include <iostream>

int main()
{
	double a = 0.0;
	double b = 0.0;
	char z = 0;

	std::cout << "podaj pierwsza liczbe " << std::endl;
	std::cin >> a;
	std::cout << "podaj znak dzialania (+, -, *, / ): " << std::endl;
	std::cin >> z;
	std::cout << "podaj druga liczbe " << std::endl;
	std::cin >> b;

	double sum = a + b;
	double substr = a - b;
	double multip = a * b;


	if (z == '+')
	{
		std::cout << "wynik: " << sum << std::endl;
	}
	else if (z == '-')
	{
		std::cout << "wynik: " << substr << std::endl;
	}
	else if (z == '*')
	{
		std::cout << "wynik: " << multip << std::endl;
	}

	else if( (z == '/') && (b == 0))
	{
		std::cout << "dzielenie przez zero niemo¿liwe, podaj b rozne od 0" << std::endl;

	}
	else 
		{
			std::cout << "wynik: " << (a / b) << std::endl;
		}
	

}