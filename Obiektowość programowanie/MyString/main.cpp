#include "MyString.hpp"
#include <iostream>
int main()
{
	MyString empty;
	empty.print();

	char tabOfChars[] = {'s','i','m','p','l','e','\0'};
	MyString simple(tabOfChars);
	simple.print();

	MyString negative((char *) "isn't it?");
	negative.print();
	//std::cout << negative << std::endl; // korzystamy z przeciazonego operatora <<
	MyString together;
	MyString together2;

	together = negative.append((char*)" Simple");
	together2 = simple.append(negative);

}



	