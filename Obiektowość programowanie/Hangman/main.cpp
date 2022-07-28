#include "Hangman.hpp"
#include <string>
#include <iostream>

int main()
{
	//pozniej tutaj dojdzie kawalek generujacy secret
	Hangman game("wisielec");
	bool finished;
	do
	{
		std::string guess = game.getGuess(); // zwracac _ A _ _ _ A _
		std::cout << guess << std::endl;
		std::string alphabet = game.getAlphabet(); // zwraca _ B C D E _
		std::cout << alphabet << std::endl;

		std::cout << "Guess a letter: ";
		char letter;
		std::cin >> letter;

		finished = game.guess(letter); // zgadujemy - zmieniamy zarowno guess jak i alfabet
	} while (!finished);
	std::cout << "Secret key was: " << game.getSecret();
	return 0;
}
