#include "Mateusz String.hpp"

MyString::MyString()
{
	this->arr = new char[1]; //1-elementowa tablica
	this->arr[0] = '\0';
}

MyString::MyString(char* input)
{
	int length = std::strlen(input);
	//this->arr = input; // unikamy - uzalezniamy sie od tablicy zarzadzanej przez obiekt zewnetrzny
	this->arr = new char[length + 1];

	//skopiowac input -> arr, na koncu dopisac 0
	//memcpy, strcpy - z ANSI C; albo petla for
	for (int i = 0; i < length; i++)
		arr[i] = input[i];
	arr[length] = '\0';
}

MyString::MyString(const MyString& other)
{
	int length = std::strlen(other.arr);
	this->arr = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->arr[i] = other.arr[i];
	}
	this->arr[length] = '\0';
}

MyString& MyString::operator=(MyString other)
{
	this->arr = new char[std::strlen(other.arr) + 1];
	for (int i = 0; i < std::strlen(other.arr); i++)
	{
		//*(arr + i) = *(other.arr + 1); // unikamy tego zapisu
		this->arr[i] = other.arr[i];
	}
	this->arr[std::strlen(other.arr)] = '\0';
	return *this;
}

MyString::~MyString()
{
	delete[] arr;
}

void MyString::print()
{
	std::cout << arr << std::endl;
}

MyString MyString::append(char* input)
{
	int length1 = std::strlen(arr); //zlicza dugo pierwszej tablicy - 3
	int length2 = std::strlen(input); // zlicza dugo drugiej tablicy - 3
	int length3 = length1 + length2;// dodaje te dugoci - 6
	char* newArr = new char[length3 + 1]; // tworzymy nowego stringa - dodajemy do dugoci +1 dla zera - 7
	for (int i = 0; i < length1; i++) //wypeniamy znakami z pierwszej tablicy
	{
		newArr[i] = arr[i]; // [a,l,a]
	}
	for (int i = 0; i < length2; i++) //wypeniamy znakami z drugiej tablicy
	{
		newArr[i + length1] = input[i];// [a,l,a, k, o, t]
	}
	newArr[length3] = '\0'; //ustawia ostatnie miejsce w tablicy na zero
	return MyString(newArr);
}

MyString MyString::append(MyString input)
{
	char* otherArr = input.arr; //lepiej zwinac do jednej linijki z linijka nizej
	MyString result = this->append(otherArr); //this-> zeby glosno zaznaczyc ze wykonujemy metode na obiekcie ktorym aktualnie jestesmy
	return result;
}

//[A,L,A, , M, A] -> 3
//[A,L,A, M, A] -> 5
//[ , A, L,A, M, A] -> 1
MyString MyString::firstWord()
{
	int index = -1;
	//for (int i = 0; i < std::strlen(arr) && index == -1; i++) // alternatywna
	for (int i = 0; i < std::strlen(arr); i++)
	{
		if (arr[i] == ' ')
		{
			index = i;
			break;
		}
	}
	//if index == -1 -> znaczy nie ma spacji
	//if index == 0 -> pierwsza spacja
	//if index inny -> tniemy az do pierwszego indexu

	MyString result;
	if (index == -1)
	{
		result = MyString(this->arr);
	}
	else if (index != 0)
	{
		char* newArr = new char[index + 1];
		for (int i = 0; i < index; i++)
		{
			newArr[i] = this->arr[i];
		}
		newArr[index] = '\0';
		result = MyString(newArr);
		delete[] newArr;
	}
	return result;
}

//tak tez by mozna bylo - tworzymy tablice ktora jest dlugosci oryginalnego MyString i przepisujemy do pierwszej spacji
//MyString MyString::firstWord()
//{
//	char* newArr = new char[std::strlen(arr)];
//	//przepisz znaki az nie napotkasz spacji;
//}


char* MyString::getArr() const
{
	return arr;
}

std::ostream& operator<<(std::ostream& s, const MyString& v) {
	return s << v.getArr();
}


//void MyString::foo4() {}
//void MyString::foo3() {foo4();}
//void MyString::foo2() {foo3();}
//void MyString::foo1() {this->foo2();}

//MyString first;
//first.foo1();
//MyString second;
//second.foo2();
