
#include <iostream>

//funkcja sumujaca liczby ujemne
int SumReversed(int a)
{
	int sum = 0;

	for (int i = 0; i >= a; i--)
		{
			sum += i;
		}
	return sum;

}




void text() 
{
	std::cout << "Hello world!" << std::endl;
}

void show_digit(double a)
{
	std::cout << a << std::endl;
}

void print_digit()
{
	double a = 0.00;
    
	std::cout << "podaj liczbe: " << std::endl;
	std::cin >> a;

	std::cout<< "podana liczbe : " << a << std::endl;
}

double print_digit_2()
	
{
	double num = 0.00;

	std::cout << "podaj liczbe: " << std::endl;
	std::cin >> num;

	std::cout << "podana liczbe : " << num << std::endl;
	return num;
}

//Funckja przyjmuj¹ca 1 parametr
//Liczba ca³kowita wiêksza od 0:
// * dla parzystych ma zwróciæ 2*liczba
// * dla nieparzystych zwróciæ -liczba
//Liczba mniejsza od 0 ma zwróciæ t¹ liczbê bez zmian

int porownanie(int a)
{
	

	if (a <= 0)
	{
		return a;
	}
	else if (a > 0)
	{
		if ((a % 2) == 0)
		{
			return 2*a;

		}
		else
		{
			return -a;
		}
	}

}


//artgument domyslny 
//napisz program pole kola


double Polekola(double r, double pi = 3.14)
{
	return r * r * pi;

}

int F_parzystych()
{

	int  countEven = 0;
	int input = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "podaj liczbe : ";
		std::cin >> input;

		if ((input % 2) == 0)
		{
			countEven++;
		}
	}

		return countEven;

}
int main()
{
	std::cout << SumReversed(-7);

	int  countEven = 0;
	for (int i = 0; i < 10; i++)
	{
		int input = 0;
		std::cout << "podaj liczbe : ";
		std::cin >> input;

		if ((input % 2) == 0)
		{
			countEven++;
		}

		std::cout << "liczba wprowadzonych liczb patrzystych: "
			<< countEven;


	}

	std::cout <<"pole kola gdzie r =4 " << Polekola(4) << std::endl;
	std::cout << "pole kola gdzie r =4 a pi dokladniejsze niz 3.14 " << Polekola(4,3.1415) << std::endl;


	//text();

	//show_digit(10);
	//print_digit();

	//double a = print_digit_2();
	//double b = print_digit_2();

	//std::cout << "a = " << a << std::endl;
	//std::cout << "b = " << b << std::endl;

	int num1 = porownanie(10);
	std::cout<< "num_1: " << num1 << std::endl;
	int num2 = porownanie(11);
	std::cout << "num_2: " << num2 << std::endl;
	int num3 = porownanie(-100);
	std::cout << "num_3: " << num3 << std::endl;
	int num4 = porownanie(-101);
	std::cout << "num_4: " << num4 << std::endl;
	int num5 = porownanie(0);
	std::cout << "num_5: " << num5 << std::endl;
}
