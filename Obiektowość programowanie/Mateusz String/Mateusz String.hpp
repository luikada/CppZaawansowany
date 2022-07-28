#pragma once
#include <string> //!uwaga, nei korzystajmy z samych stringow, za bardzo...
#include <iostream>

//immutable
class MyString
{
	char* arr;
public:
	MyString();
	MyString(char* input);
	MyString(const MyString& other);
	MyString& operator=(MyString other);
	virtual ~MyString();
	char* getArr() const;
	void print();
	//albo append zwraca nowy obiekt typu MyString
	MyString append(char* input); //to spelnia cechy immutability
	//albo append zmienia aktualny obiekt MyString
	void appendToSame(char* input); //to nie spelnia cech immutability

	MyString append(MyString input);
	//void appendToSame(MyString input);

	MyString firstWord();
};

std::ostream& operator<<(std::ostream& s, const MyString& v); //free function
