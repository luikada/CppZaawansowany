#include <iostream>

int readNumber(int messageNumber) //sygnatura funkcji
{
	int number = 0;
	std::cout << "Podaj " << messageNumber << " liczbe: ";
	std::cin >> number;
	return number;
}

void printBoolAsText(bool value) //przyk³ad funkcji ktora nic nie zwraca
{
	if (value)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}

void printBoolAsText(bool value, bool makeNewLine)
{
	printBoolAsText(value);

	if (makeNewLine) //sprawdz czy mamy zrobic nowa linie
	{
		std::cout << std::endl;
	}
}

void checkTwoBools(int a, int b, char operation)
{ 
	if (operation == '=')
	{
		std::cout << "Czy liczby sa rowne: ";
		printBoolAsText(a == b, true);
	}
	else if (operation == '!=')
	{
		std::cout << "Czy liczby sa rozne: ";
		printBoolAsText(a != b, true);
	}
	else if (operation == '>')
	{
		std::cout << "Czy pierwsza jest wieksza: ";
		printBoolAsText(a > b, true);
	}
	else if (operation == '<')
	{
		std::cout << "Czy pierwsza jest mniejsza: ";
		printBoolAsText(a < b, true);
	}



}

int main()
{
	int a = readNumber(1);
	int b = readNumber(2);

	checkTwoBools(a, b, '=');
	checkTwoBools(a, b, '!');
	checkTwoBools(a, b, '>');
	checkTwoBools(a, b, '<');

	std::cout << checkTwoBools;


	//std::cout << "Czy liczby sa rowne: " << (a == b) << std::endl;
	//std::cout << "Czy liczby sa rozne: " << (a != b) << std::endl;
	//std::cout << "Czy pierwsza jest wieksza: " << (a > b) << std::endl;
	//std::cout << "Czy pierwsza jest mniejsza: " << (a < b) << std::endl;
	
	
	//std::cout << "Czy liczby sa rowne: ";
	//printBoolAsText(a == b, true);
	//std::cout << "Czy liczby sa rozne: ";
	//printBoolAsText(a != b, true);
	//std::cout << "Czy pierwsza jest wieksza: ";
	//printBoolAsText(a > b, true);
	//std::cout << "Czy pierwsza jest mniejsza: ";
	//printBoolAsText(a < b, false);

	//Przyk³ad wywo
	//std::cout << "Wartosc rownania: ";
	//printBoolAsText(a < b, false);
	//std::cout << " sprawdzajacego czy pierwsza jest mniejsza";

}
