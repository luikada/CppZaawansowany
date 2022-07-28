#include "Wordle.hpp"
#include <iostream>
#include <stdlib.h> //w .cpp


Wordle::Wordle(std::string secret)
{	
	this->secret = secret;
}



void Wordle::test(std::string guess)
{
	guesses[attempt] = guess;
		std::string answer = "BBBBB";

		for (int i = 0; i < 5; i++)
		{
			if (secret[i] == guess[i])
			{
				answer[i] = 'G';
			}
			else
			{
				for (int j = 0; j < 5; j++)
					if (secret[j] == guess[i])
					{
						answer[i] = 'O';
					}
			}


		}
		answers[attempt] = answer;
		attempt++;
		
}

void Wordle::draw()
{

	for (int i = 0; i < attempt; ++i) //6 bo mamy 6 wierszy
	{
		std::cout << guesses[i] << '\t'; 

			for (int j = 0; j < 5; ++j)
			{				
				if (answers[i][j] == 'G')
					printOnScreen('G', Color::GREEN);
				else if (answers[i][j] == 'B')
					printOnScreen('B', Color::RED);
				else if (answers[i][j] == 'O')
					printOnScreen('O', Color::YELLOW);
			}
			std::cout << std::endl;
	}
}


void Wordle::printOnScreen(char c, Color color)
{

	if (c == 'G')
		std::cout << "\033[1;32m G \033[0m";
	else if (c == 'B')
		std::cout << "\033[1;30m B\033[0m";
	else if (c == 'O')
		std::cout << "\033[1;33m O\033[0m";
}

bool Wordle::isFinished()
{
return (attempt == 11 || answers[attempt - 1] == "GGGGG");

}

