
#include <iostream>



int main()
{
	char x = 0;

	double num_1 = 0.0;
	char a = 0;
	double result = 0.0;



		std::cout << "podaj liczbe" << std::endl;
		std::cin >> result;
		do {
			std::cout << "podaj dzia³anie + , -, / , * " << std::endl;
			std::cin >> a;
			std::cout << "podaj liczbe" << std::endl;
			std::cin >> num_1;


				switch (a)
				{
				case '+':

					result += num_1;
					std::cout << "wynik to: " << result<<std::endl;
					std::cout << "kontunowac? wybierz y/n: " << std::endl;
					std::cin >> x;
					if (x == 'n')
					{
						break;
					}
					else
						continue;

				
				case '-':

					result -= num_1;
					std::cout << "wynik to: " << result << std::endl;
					std::cout << "kontunowac? wybierz y/n: " << std::endl;
					std::cin >> x;
					if (x == 'n')
					{
						break;
					}
					else
						continue;

				case '*':

					result *= num_1;
					std::cout << "wynik to: " << result << std::endl;
					std::cout << "kontunowac? wybierz y/n: " << std::endl;
					std::cin >> x;
					if (x == 'n')
					{
						break;
					}
					else
						continue;

				case '/':

					result /= num_1;
					std::cout << "wynik to: " << result << std::endl;
					std::cout << "kontunowac? wybierz y/n: " << std::endl;
					std::cin >> x;
					if (x == 'n')
					{
						break;
					}
					else
						continue;
				default: 
					std::cout << "niepoprawne dane, kontunowac? wybierz y/n: " << std::endl;
					std::cin >> x;
					if (x == 'n')
					{
						break;
					}
					else
						continue;



				}

			
		




	} while (x != 'n');

}