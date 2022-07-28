#include <iostream>
// funkcja z petla wywolujaca dany znak okreslona ilosc razy

void printChar(char charToPrint, int numTimes)
{
	for (int i = 0; i < numTimes; i++)
	{
		std::cout << charToPrint << " ";

	}
}

void CharShowIT(char ThisChar, int TimesThisNum)
{

	for (int i = 0; i <= TimesThisNum; ++i)

		std::cout << ThisChar << " ";

}

int main()
{
	
	printChar('=',10);


	std::cout << std::endl;
	
	int a = 0;
	char c = 0;

	std::cout << "podaj znak" << std::endl;
	std::cin >> c;
	std::cout << " ile razy powtorzyc znak?" << std::endl;
	std::cin >> a;
	CharShowIT(c, a);



}













