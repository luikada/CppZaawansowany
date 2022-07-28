// zad2].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void add10(int& a)
{

	a  =+ 10;

}



int main()
{
	int var = 0;
	add10(var);
	std::cout << "var=" << var << std::endl;

}
