
#include <iostream>
#include "Wordle.hpp"
#include <stdlib.h>


int main()
{

	Wordle game("beady");
	do {
		std::string word;
		std::cout << "podaj slowo" << std::endl;
		std::cin >> word;
		game.test(word);
		game.draw();

	} while (!game.isFinished());

}


