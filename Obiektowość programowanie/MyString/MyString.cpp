#include "MyString.hpp"

MyString::MyString()
{
	this->charsTab = new char[1];
	this->charsTab[0] = '\0';
}


MyString::MyString(char* tab) // zaczytywanie tablicy do istniejacej w klasie i na jej podstawie tworzenie nowej
{
	int thatLongString = std::strlen(tab); // dlugosc tablicy
	this->charsTab = new char[thatLongString+1];

	for (int i = 0; i < thatLongString; i++)
	{
		 charsTab[i]= tab[i] ;
	}
	charsTab[thatLongString] = '\0';

}
MyString::MyString(const MyString& other)
{
	int length = std::strlen(other.charsTab);
	this->charsTab = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->charsTab[i] = other.charsTab[i];
	}
	this->charsTab[length] = '\0';
}


MyString::~MyString()
{
	delete[] charsTab;
}

void MyString::print()
{
	std::cout << charsTab << std::endl;
}

MyString MyString::append(char* tab)
{
	int length1 = std::strlen(charsTab); //zlicza długość pierwszej tablicy - 3
	int length2 = std::strlen(tab); // zlicza długość drugiej tablicy - 3
	int length3 = length1 + length2;// dodaje te długości - 6
	char* newArr = new char[length3 + 1]; // tworzymy nowego stringa - dodajemy do długości +1 dla zera - 7
	
	for (int i = 0; i < length1; i++) //wypełniamy znakami z pierwszej tablicy
	{
		newArr[i] = charsTab[i];  
	}
	
	for (int i = 0; i < length2; i++) //wypełniamy znakami z drugiej tablicy
	{
		newArr[i+length1] = tab[i];
	}
	newArr[length3] = '\0'; //ustawia ostatnie miejsce w tablicy na zero
	return MyString(newArr);
}

MyString MyString::append(MyString tab)
{
	MyString result = this->append(tab.charsTab);
	return result;
}


//MyString MyString::firstWord(char* tab)
//{
//	int i = 0;
//	int lenFW = std::strlen(charsTab); //zlicza długość pierwszej tablicy - 3
//
//	char* fWord = new char[lenFW+1]; // tworzymy nowego stringa - dodajemy do długości +1 dla zera - 7
//
//	do
//	{
//		tab[i]= fWord[i];
//			++i;
//
//	} while (tab[i] != ' ' && tab[i] !='/0');
//
//	return MyString(fWord);
//}
//