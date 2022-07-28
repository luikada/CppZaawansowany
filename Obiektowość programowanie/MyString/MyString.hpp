#pragma once
#include <string> 
#include <iostream>

class MyString
{
	char* charsTab; 

public:
	MyString();
	MyString(char* tab);
	MyString(const MyString& other);
	virtual ~MyString();

	char* getArr() const;

	void print();
	MyString append(char* tab);
	MyString append(MyString tab);

};


std::ostream& operator<<(std::ostream& s, const MyString& v); //free function
