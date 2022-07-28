#include "Czarna skrzynka.hpp"
#include <random>
//Zaimplementuj klas� BlackBoxGuess, kt�ra b�dzie gr� w zgadywanie liczby z zadanego
//zakresu.Wytyczne
//1.Klas� inicjalizuj zakresem, z kt�rego losowana b�dzie liczba do zgadni�cia < 0; zakres)  zakres 0-50
//2.W main() wczytaj zakres oraz zaimplementuj nieskonczona p�tl� dop�ki u�ytkownik nie zgadnie
//3.Zaimplementuj metod� is( int ) kt�ra zwraca -1 je�li szukana liczba jest wi�ksza, 0, je�li to ta liczba, 1 je�li szukana liczba jest mniejsza.
//4.Rozbij metod� is (int) na dwie inne : isExact(int) oraz isBigger(int)

BlackBoxGuess::BlackBoxGuess(int range)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distr(0,range);
	this->hiddenNumber = distr(gen);
}

int BlackBoxGuess::is(int guess)
{

	if (guess == hiddenNumber)
	{
		return 0;
	}
	else if (guess > hiddenNumber)
	{
		return -1;
	}
	else
	{
		return 1;
	}

}
