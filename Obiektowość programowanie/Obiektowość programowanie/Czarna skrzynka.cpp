#include "Czarna skrzynka.hpp"
#include <random>
//Zaimplementuj klasê BlackBoxGuess, która bêdzie gr¹ w zgadywanie liczby z zadanego
//zakresu.Wytyczne
//1.Klasê inicjalizuj zakresem, z którego losowana bêdzie liczba do zgadniêcia < 0; zakres)  zakres 0-50
//2.W main() wczytaj zakres oraz zaimplementuj nieskonczona pêtlê dopóki u¿ytkownik nie zgadnie
//3.Zaimplementuj metodê is( int ) która zwraca -1 jeœli szukana liczba jest wiêksza, 0, jeœli to ta liczba, 1 jeœli szukana liczba jest mniejsza.
//4.Rozbij metodê is (int) na dwie inne : isExact(int) oraz isBigger(int)

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
