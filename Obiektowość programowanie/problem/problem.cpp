
#include <iostream>
#include <string.h>

int main()

{

	std::string secret = "beady";
	std::string guess = {};

	std::string guesses[6];
	std::string answers[6];
	int attempt = 0;


	do {
		std::cout << "podaj slowo" << std::endl;
		std::cin >> guess;

		std::string answer = "BBBBB";

		for (int i = 0; i < 5; i++)
		{
			guesses[i] = guess;

			if ((secret[i]) == (guess[i]))
			{
				answer[i] = 'G';
				
			}
			else
			{
				for (int j = 0; j < 5; j++)
					if (secret[j]==guess[i])
					{
						answer[i] = 'O';
					}
				

			}
			answers[i]= answer[i];


		}

		

	} while (attempt != 3);


	

}