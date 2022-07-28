#pragma once
#include <string>

enum class Color : char { GREEN = 32, RED = 30, YELLOW = 33 };

class Wordle
{
	std::string secret;
	std::string guesses[10];
	std::string answers[10];
	int attempt = 0;

public:
	Wordle(std::string secret);
	void test(std::string guess);
	void draw(); // wypisz obie tablice, jedna obok drugiej + na poczatku wyczyscic ekran
	void printOnScreen(char c, Color color);
	bool isFinished(); // sprawdzamy czy ostatnie zgadniete slowo to secret oraz porownac liczbe attempt
	//bool isFinished(std::string guess); // sprawdzamy czy slowo to secret oraz porownac liczbe attempt
	//bool isFinished(std::string colours); // sprawdzamy czy slowo to "GGGGG"
};

// std::cout << '\t'
// wynik metody draw
//IRATE \t BBGBO
//CEASE \t BGGBB
//HEAVY \t BGGBB
//BEADY \t GGGGG
