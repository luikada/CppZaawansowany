//Napisz program, który wypisze na konsole s³owo “ku” tyle razy ile za¿¹da tego u¿ytkownik.

#include <iostream>

void printKu(int numTimes)
{
	for ( int i=0 ; i< numTimes; i++)
	{
		std::cout << "ku";

	}
}

void printKuKu( int times)
{
	for (int i = 0; i < times; ++i)

		std::cout << "Ku ";

}

int main()
{
	int inputTimes = 0;
	std::cout << "ile razy zakuka?: " << std::endl;
	std::cin >> inputTimes;

	printKu(inputTimes);

	std::cout << std::endl;

	int t = 0;
	std::cout << "ile razy zakuka?: " << std::endl;
	std::cin >> t;

	printKuKu(t);

}
